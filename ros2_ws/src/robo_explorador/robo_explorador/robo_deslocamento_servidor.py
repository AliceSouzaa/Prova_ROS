import asyncio
import math

import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.node import Node
from robo_interfaces.action import Deslocamento


def mover_para(atual, alvo, passo):
    if abs(alvo - atual) <= passo:
        return alvo
    if alvo > atual:
        return atual + passo
    return atual - passo


class ServidorDeslocamento(Node):
    def __init__(self):
        super().__init__('robo_deslocamento_servidor_caroliny')

        self.latitude_atual = 0.0
        self.longitude_atual = 0.0

        self.action_server = ActionServer(
            self,
            Deslocamento,
            'deslocamento',
            execute_callback=self.executar,
            goal_callback=self.validar_meta,
            cancel_callback=self.aceitar_cancelamento,
        )

        self.get_logger().info(
            'Servidor /deslocamento pronto. Posicao inicial (0, 0).'
        )

    def validar_meta(self, goal):
        mesma_posicao = (
            math.isclose(goal.latitude, self.latitude_atual)
            and math.isclose(goal.longitude, self.longitude_atual)
        )

        velocidades_validas = (
            goal.velocidade_latitudinal >= 0.0
            and goal.velocidade_longitudinal >= 0.0
            and (
                goal.velocidade_latitudinal > 0.0
                or goal.velocidade_longitudinal > 0.0
            )
        )

        if mesma_posicao or not velocidades_validas:
            self.get_logger().warning('Meta rejeitada.')
            return GoalResponse.REJECT

        return GoalResponse.ACCEPT

    def aceitar_cancelamento(self, goal_handle):
        self.get_logger().warning('Cancelamento solicitado.')
        return CancelResponse.ACCEPT

    async def executar(self, goal_handle):
        inicio_lat = self.latitude_atual
        inicio_lon = self.longitude_atual
        meta = goal_handle.request

        feedback = Deslocamento.Feedback()
        resultado = Deslocamento.Result()

        while True:
            await asyncio.sleep(1.0)

            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                resultado.sucesso = False
                resultado.distancia_percorrida = math.hypot(
                    self.latitude_atual - inicio_lat,
                    self.longitude_atual - inicio_lon
                )
                return resultado

            self.latitude_atual = mover_para(
                self.latitude_atual,
                meta.latitude,
                meta.velocidade_latitudinal
            )
            self.longitude_atual = mover_para(
                self.longitude_atual,
                meta.longitude,
                meta.velocidade_longitudinal
            )

            feedback.latitude_atual = self.latitude_atual
            feedback.longitude_atual = self.longitude_atual
            goal_handle.publish_feedback(feedback)

            self.get_logger().info(
                f'Posicao atual: ({self.latitude_atual:.5f}, '
                f'{self.longitude_atual:.5f})'
            )

            chegou = (
                math.isclose(self.latitude_atual, meta.latitude)
                and math.isclose(self.longitude_atual, meta.longitude)
            )

            if chegou:
                break

        goal_handle.succeed()
        resultado.sucesso = True
        resultado.distancia_percorrida = math.hypot(
            self.latitude_atual - inicio_lat,
            self.longitude_atual - inicio_lon
        )

        self.get_logger().info(
            f'Deslocamento concluido. Distancia: '
            f'{resultado.distancia_percorrida:.6f} unidades.'
        )
        return resultado


def main(args=None):
    rclpy.init(args=args)
    node = ServidorDeslocamento()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()

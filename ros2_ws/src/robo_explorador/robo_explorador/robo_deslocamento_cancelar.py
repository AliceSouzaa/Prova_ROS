import time

import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from robo_interfaces.action import Deslocamento


class ClienteCancelar(Node):
    def __init__(self):
        super().__init__('robo_deslocamento_cancelar_caroliny')
        self.client = ActionClient(
            self, Deslocamento, 'deslocamento'
        )

    def receber_feedback(self, mensagem):
        feedback = mensagem.feedback
        self.get_logger().info(
            f'Posicao: latitude={feedback.latitude_atual:.5f}, '
            f'longitude={feedback.longitude_atual:.5f}'
        )


def main(args=None):
    rclpy.init(args=args)
    node = ClienteCancelar()

    node.get_logger().info('Aguardando servidor /deslocamento...')
    node.client.wait_for_server()

    goal = Deslocamento.Goal()
    goal.latitude = 0.10
    goal.longitude = 0.10
    goal.velocidade_latitudinal = 0.005
    goal.velocidade_longitudinal = 0.005

    future = node.client.send_goal_async(
        goal, feedback_callback=node.receber_feedback
    )
    rclpy.spin_until_future_complete(node, future)
    handle = future.result()

    if handle is None or not handle.accepted:
        node.get_logger().error('Meta rejeitada.')
        node.destroy_node()
        rclpy.shutdown()
        return

    node.get_logger().info('Meta aceita; aguardando 5 segundos.')
    inicio = time.monotonic()

    while time.monotonic() - inicio < 5.0:
        rclpy.spin_once(node, timeout_sec=0.1)

    cancel_future = handle.cancel_goal_async()
    rclpy.spin_until_future_complete(node, cancel_future)

    node.get_logger().warning('Solicitação de cancelamento enviada.')

    result_future = handle.get_result_async()
    rclpy.spin_until_future_complete(node, result_future)
    wrapper = result_future.result()

    if wrapper is not None:
        resultado = wrapper.result
        node.get_logger().info(
            f'Sucesso={resultado.sucesso}; '
            f'distancia percorrida='
            f'{resultado.distancia_percorrida:.6f} unidades.'
        )

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

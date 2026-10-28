import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from robo_interfaces.action import Deslocamento


class ClienteDeslocamento(Node):
    def __init__(self):
        super().__init__('robo_deslocamento_cliente_caroliny')
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
    node = ClienteDeslocamento()

    node.get_logger().info('Aguardando servidor /deslocamento...')
    node.client.wait_for_server()

    goal = Deslocamento.Goal()
    goal.latitude = 0.02
    goal.longitude = 0.03
    goal.velocidade_latitudinal = 0.01
    goal.velocidade_longitudinal = 0.01

    future = node.client.send_goal_async(
        goal, feedback_callback=node.receber_feedback
    )
    rclpy.spin_until_future_complete(node, future)
    handle = future.result()

    if handle is None or not handle.accepted:
        node.get_logger().error('Meta rejeitada.')
    else:
        node.get_logger().info('Meta aceita; aguardando conclusão.')
        result_future = handle.get_result_async()
        rclpy.spin_until_future_complete(node, result_future)
        wrapper = result_future.result()

        if wrapper is not None:
            resultado = wrapper.result
            node.get_logger().info(
                f'Sucesso={resultado.sucesso}; '
                f'distancia={resultado.distancia_percorrida:.6f} unidades.'
            )

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

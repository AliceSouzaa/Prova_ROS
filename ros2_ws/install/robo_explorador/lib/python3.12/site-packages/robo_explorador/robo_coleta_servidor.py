
import random

import rclpy
from rclpy.node import Node
from robo_interfaces.srv import ColetaMaterial


class ServidorColeta(Node):

    def __init__(self):
        super().__init__('robo_coleta_servidor_caroliny_alice')

        self.servico = self.create_service(
            ColetaMaterial,
            'coleta_material',
            self.coletar
        )

        self.get_logger().info('Servidor de coleta iniciado.')

    def coletar(self, request, response):
        profundidade = request.profundidade

        response.sucesso = random.random() <= 0.7

        if response.sucesso:
            self.get_logger().info(
                f'Coleta realizada a {profundidade:.2f} metros.'
            )
        else:
            self.get_logger().info('Falha na coleta.')

        return response


def main(args=None):
    rclpy.init(args=args)
    node = ServidorColeta()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()


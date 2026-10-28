import random

import rclpy
from rclpy.node import Node
from robo_interfaces.msg import Monitoramento


class Publicador(Node):
    def __init__(self):
        super().__init__('robo_topico_publish_carolinyalice')
        self.pub = self.create_publisher(
            Monitoramento, 'monitoramento', 10
        )
        self.timer = self.create_timer(1.0, self.publicar)
        self.get_logger().info('Publicador de carolinyalice iniciado.')

    def publicar(self):
        msg = Monitoramento()
        msg.nivel_oxigenio = random.uniform(1.0, 100.0)
        msg.temperatura = random.uniform(1.0, 100.0)

        self.pub.publish(msg)

        self.get_logger().info(
            f'Publicando em /monitoramento: '
            f'oxigenio={msg.nivel_oxigenio:.2f}, '
            f'temperatura={msg.temperatura:.2f} C'
        )


def main(args=None):
    rclpy.init(args=args)
    node = Publicador()
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

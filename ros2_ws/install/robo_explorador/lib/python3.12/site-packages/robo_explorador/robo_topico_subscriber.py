import rclpy
from rclpy.node import Node
from robo_interfaces.msg import Monitoramento


class Assinante(Node):
    def __init__(self):
        super().__init__('robo_topico_subscriber_caroliny')
        self.sub = self.create_subscription(
            Monitoramento,
            'monitoramento',
            self.receber,
            10
        )
        self.get_logger().info(
            'Estacao base aguardando /monitoramento.'
        )

    def receber(self, msg):
        seguro = (
            10.0 <= msg.temperatura <= 40.0
            and msg.nivel_oxigenio > 80.0
        )

        estado = 'Safe' if seguro else 'Not Safe'

        self.get_logger().info(
            f'Oxigenio={msg.nivel_oxigenio:.2f}, '
            f'temperatura={msg.temperatura:.2f} C -> {estado}'
        )


def main(args=None):
    rclpy.init(args=args)
    node = Assinante()
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

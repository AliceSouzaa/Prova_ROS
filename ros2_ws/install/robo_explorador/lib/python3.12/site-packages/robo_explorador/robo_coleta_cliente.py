import random

import rclpy
from rclpy.node import Node
from robo_interfaces.srv import ColetaMaterial


def main(args=None):
    rclpy.init(args=args)
    node = Node('robo_coleta_cliente_caroliny')

    client = node.create_client(
        ColetaMaterial, 'coleta_material'
    )

    while not client.wait_for_service(timeout_sec=1.0):
        node.get_logger().info('Aguardando /coleta_material...')

    request = ColetaMaterial.Request()
    request.profundidade = random.uniform(0.1, 0.5)

    node.get_logger().info(
        f'Solicitando coleta em {request.profundidade:.3f}.'
    )

    future = client.call_async(request)
    rclpy.spin_until_future_complete(node, future)

    if future.result() is None:
        node.get_logger().error('Falha ao receber resposta.')
    elif future.result().sucesso:
        node.get_logger().info('Coleta bem-sucedida.')
    else:
        node.get_logger().info('Coleta não foi bem-sucedida.')

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

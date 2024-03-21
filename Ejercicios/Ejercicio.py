class Producto:
    def __init__(self, nombre, precio, cantidad): #Constructor
        self.nombre = nombre
        self.precio = precio
        self.cantidad = cantidad

class Inventario:
    def __init__(self): #Constructor
        self.productos = []

    def AgregarProducto(self, producto):
        self.productos.append(producto)

    def MostrarInventario(self):
        for producto in self.productos:
            print(f"Producto: {producto.nombre}, Precio: S/{producto.precio}, Cantidad: {producto.cantidad}")

class Venta:
    def __init__(self, producto, cantidad): #Constructor
        self.producto = producto
        self.cantidad = cantidad

class RegistroVentas:
    def __init__(self): #Constructor
        self.ventas = []

    def AgregarVenta(self, venta):
        self.ventas.append(venta)

    def MostrarVentas(self):
        for venta in self.ventas:
            print(f"Producto: {venta.producto.nombre}, Cantidad: {venta.cantidad}")

class Pedido:
    def __init__(self, cliente, productos):
        self.cliente = cliente
        self.productos = productos

class RegistroPedidos:
    def __init__(self):
        self.pedidos = []

    def AgregarPedido(self, pedido):
        self.pedidos.append(pedido)

    def NotificarPedidoListo(self, cliente):
        print(f"Pedido listo sr. {cliente}!")

#Aqui se genera el reporte de ventas
def GenerarReporteVentas(ventas):
    totalventas = sum(venta.producto.precio * venta.cantidad for venta in ventas)
    print(f"Total Ganancia: S/{totalventas}")

# Aqui se genera el reporte de inventario
def GenerarReporteInventario(inventario):
    inventario.MostrarInventario()


producto1 = Producto("Doritos", 2.5, 100)
producto2 = Producto("InkaChips", 6.0, 150)
producto3 = Producto("Gomitas", 1.2, 200)

# Crear inventario y agregar productos
inventario = Inventario()
inventario.AgregarProducto(producto1)
inventario.AgregarProducto(producto2)

# Mostrar inventario
print("Inventario actual: ")
GenerarReporteInventario(inventario)

# Registrar venta
venta1 = Venta(producto1, 5)
venta2 = Venta(producto2, 10)
venta3 = Venta(producto3, 2)

# Registro de ventas
Rventa = RegistroVentas()
Rventa.AgregarVenta(venta1)
Rventa.AgregarVenta(venta2)
Rventa.AgregarVenta(venta3)

# Mostrar ventas
print("\nVentas realizadas:")
Rventa.MostrarVentas()

# Generar reporte de ventas
print("\nReporte de ventas:")
GenerarReporteVentas(Rventa.ventas)

# Realizar un pedido y notificar al cliente
Pedido1cliente1 = Pedido("Juan", [producto1, producto2])
Regpedido= RegistroPedidos()
Regpedido.AgregarPedido(Pedido1cliente1)
Regpedido.NotificarPedidoListo(Pedido1cliente1.cliente)

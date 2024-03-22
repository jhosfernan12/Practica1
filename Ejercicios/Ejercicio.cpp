#include <iostream>
#include <string>
using namespace std;


class Producto 
{
public:
    string nombre;
    float precio;
    int cantidad;

    // Constructores
    Producto() {} // Constructor por defecto

    Producto(string nombre, float precio, int cantidad) 
    {
        this->nombre = nombre;
        this->precio = precio;
        this->cantidad = cantidad;
    }
};


class Inventario 
{
private:
    Producto productos[100]; // Array de productos
    int numProductos;

public:
    // Constructor
    Inventario() 
    {
        numProductos = 0;
    }

    // Método para agregar un producto al inventario
    void AgregarProducto(Producto producto) 
    {
        if (numProductos < 100) 
        {
            productos[numProductos] = producto;
            numProductos++;
        } 
        else 
        {
            cout << "El inventario está lleno, no se puede agregar más productos." << endl;
        }
    }


    void MostrarInventario() 
    {
        cout << "Inventario:" << endl;
        for (int i = 0; i < numProductos; ++i) 
        {
            cout << "Producto: " << productos[i].nombre << ", Precio: S/" << productos[i].precio << ", Cantidad: " << productos[i].cantidad << endl;
        }
    }
};


class Venta 
{
public:
    Producto producto;
    int cantidad;

    // Constructores
    Venta() : cantidad(0) {} // Constructor por defecto

    Venta(Producto producto, int cantidad) 
    {
        this->producto = producto;
        this->cantidad = cantidad;
    }
};


class RegistroVentas 
{
private:
    Venta ventas[100];
    int numVentas;

public:
    // Constructor
    RegistroVentas() 
    {
        numVentas = 0;
    }


    void AgregarVenta(Venta venta) 
    {
        if (numVentas < 100) 
        {
            ventas[numVentas] = venta;
            numVentas++;
        } 
        else 
        {
            cout << "No se puede agregar más ventas, el registro está lleno." << endl;
        }
    }


    void MostrarVentas()
    {
        cout << "Registro de Ventas:" << endl;
        for (int i = 0; i < numVentas; ++i) 
        {
            cout << "Producto: " << ventas[i].producto.nombre << ", Cantidad: " << ventas[i].cantidad << endl;
        }
    }


    int ObtenerNumVentas() const
    {
        return numVentas;
    }


    const Venta& ObtenerVenta(int index) const // Metodo para obtener una venta específica por su indice
    {
        return ventas[index];
    }
};


class Pedido 
{
public:
    string cliente;
    Producto productos[100];
    int numProductos;

    // Constructor
    Pedido(string cliente, Producto productos[], int numProductos) 
    {
        this->cliente = cliente;
        this->numProductos = numProductos;
        for (int i = 0; i < numProductos; ++i) 
        {
            this->productos[i] = productos[i];
        }
    }
};

void GenerarReporteVentas(const RegistroVentas& registroVentas) 
{
    float totalVentas = 0.0;
    int numVentas = registroVentas.ObtenerNumVentas(); 
    
    cout << "Reporte de Ventas:" << endl;
    for (int i = 0; i < numVentas; ++i) 
    {
        const Venta & venta = registroVentas.ObtenerVenta(i); 
        totalVentas += venta.producto.precio * venta.cantidad;
    }
    cout << "Total Ganancia: S/" << totalVentas << endl;
}


int main() 
{
    Inventario inventario;

    //--------------CREAMOS LOS OBJETOS-------------------

    Producto producto1("Doritos", 2.5, 100);
    Producto producto2("InkaChips", 6.0, 150);
    Producto producto3("Gomitas", 1.2, 200);


    inventario.AgregarProducto(producto1);
    inventario.AgregarProducto(producto2);
    inventario.AgregarProducto(producto3);
    

    Venta venta1(producto1, 5);
    Venta venta2(producto2, 10);
    Venta venta3(producto3, 2);


    RegistroVentas Rventa;
    Rventa.AgregarVenta(venta1);
    Rventa.AgregarVenta(venta2);
    Rventa.AgregarVenta(venta3);


    cout << "Inventario Actual:" << endl;
    inventario.MostrarInventario();
    
    cout << "\nVentas realizadas:" << endl;
    Rventa.MostrarVentas();


    cout << "\nReporte de Ventas:" << endl;
    GenerarReporteVentas(Rventa);

    Producto productospedido[] = {producto1, producto2};
    Pedido Pedido1cliente1("Juan", productospedido, 2);

    cout << "\nPedido listo Sr. " << Pedido1cliente1.cliente << "!" << endl;

    return 0;
}

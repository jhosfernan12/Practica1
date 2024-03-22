#include <iostream>
#include <string>

using namespace std;

// Definición de la estructura de datos para representar un empleado
struct Employee 
{
    int id;
    string name;
    string department;
    double salary;
};

// Función para agregar un nuevo empleado
void addEmployee(Employee &employee) {
    cout << "Ingrese el ID del empleado: ";
    cin >> employee.id;
    cout << "Ingrese el nombre del empleado: ";
    cin.ignore(); // Ignorar el salto de línea anterior
    getline(cin, employee.name);
    cout << "Ingrese el departamento del empleado: ";
    getline(cin, employee.department);
    cout << "Ingrese el salario del empleado: ";
    cin >> employee.salary;
}

// Función para mostrar la información de un empleado
void displayEmployee(const Employee &employee) 
{
    cout << "ID: " << employee.id << endl;
    cout << "Nombre: " << employee.name << endl;
    cout << "Departamento: " << employee.department << endl;
    cout << "Salario: " << employee.salary << endl;
}

int main() 
{
    Employee newEmployee;

    // Agregar un nuevo empleado
    cout << "Agregando nuevo empleado:" << endl;
    addEmployee(newEmployee);
    cout << endl;

    // Mostrar la información del empleado
    cout << "Información del empleado agregado:" << endl;
    displayEmployee(newEmployee);

    return 0;
}

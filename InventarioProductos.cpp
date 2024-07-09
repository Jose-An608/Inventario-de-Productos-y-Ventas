/*Inventario de Productos y Ventas
Objetivo: Desarrollar un programa que permita registrar, listar, buscar, actualizar y eliminar
productos, así como gestionar las ventas.
Requisitos:
• Define una estructura Producto con los campos: nombre (cadena), precio (flotante).
• Define una estructura Venta con los campos: idVenta (entero), producto (cadena), cantidad
(entero), precioTotal (flotante).
• Implementa un menú con las siguientes opciones:
A: Registrar un nuevo producto.
B: Listar los productos registrados.
C: Buscar un producto por nombre.
D: Actualizar los datos de un producto.
E: Eliminar un producto.
F: Registrar una venta.
G: Listar las ventas realizadas.
H: Calcular el total de ventas realizadas.
S: Salir del programa.
• El menú debe estar ciclado y permitir volver al menú principal después de cada opción.*/

#include <iostream>
#include <string.h>
#include <vector>
#include <windows.h>

using namespace std;

struct Producto{
	string nombre;
	float precio;
};

struct Venta{
	int idVenta;
	string producto;
	int cantidad;
	float precioTotal;
};	

vector <Producto> productos;
vector <Venta> ventas;

void registrarProducto(){
	Producto p;
	
	cin.ignore();
	
	cout << "Digíte el nombre el producto: " << endl;
	getline(cin, p.nombre);
	

	cout << "Digíte el precio del producto: " << endl;
	cin >> p.precio;
		
	cin.ignore();
	
	productos.push_back(p);
}


int main(){
	int dc,m;
	SetConsoleOutputCP(CP_UTF8);
	
	cout << "----------------------------------------------------" << endl;
	cout << " ---PROGRAMA DE INVENTARIO DE PRODUCTOS Y VENTAS---" << endl;
	cout << "----------------------------------------------------" << endl << endl;

	do {
	
		cout << "1. Registrar un nuevo producto. " << endl; 
		cout << "2. Listar los productos registrados. " << endl;
		cout << "3. Buscar un producto por su nombre. " << endl;
		cout << "4. Actualizar los datos de un producto " << endl;
		cout << "5. Eliminar un producto. " << endl;
		cout << "6. Registrar una venta. " << endl;
		cout << "7. Listar las ventas realizadas. " << endl;
		cout << "8. Calcular el total de ventas realizadas. " << endl;
		cout << "9. Salir el programa. " << endl << endl;
		
		cout << "Elíja una opción (1,2,3,4,5,6,7,8 o 9): " << endl;
		cin >> m;
		
		cout << endl;
				
		switch(m) {
			
			case 1: 
			registrarProducto(); // Agregando la funcionalidad de registrar nuevo producto.
			break;
			
			case 2: 
			break;
			
			case 3:
			
			break;
			
			case 4: 
			break;
			
			case 5:
			break;
			
			case 6: 
			break;
			
			case 7:
			break;
			
			case 8:
			break;
			
			case 9:
			break;
		}
	
	cout << endl;
	
	cout << "Elíja un número si desea continuar: (1)Sí o (0)No " << endl;
	cin >> dc;
		
	cin.ignore();
	
	}while(dc == 1);
	
	return 0;
}
#include "Nodo.h"
#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

void Menu(){
	cout << "\n-----------------Menu-------------------";
	cout << "\n1. Insertar Primero";
	cout << "\n2. Eliminar Ultimo";
	cout << "\n3. Buscar por String";
	cout << "\n4. Mostrar de primero a ultimo";
	cout << "\n5. Mostrar de ultimo a primero";
	cout << "\n6. Salir";
	cout << "\n Seleccione su opcion: ";
}

int main(){
	int opcion;
	Nodo* nodo = new Nodo();
	do{
		system("cls");
		Menu();
		cin >> opcion;
		
		switch(opcion){
			case 1:
				{
					char c;
					cout << "\nIngrese Caracter: ";
					cin >> c;
					nodo->insertarInicio(c);
				}
				break;
			case 2:
				{
					nodo->eliminarUltimo();
				}
				break;
			case 3:
				{
					string cadena;
					cout << "\nIngrese Cadena: ";
					cin >> cadena;
					int cantidad = cadena.length();
					Caracter* caracterencontrado = nodo->buscarString(cadena, cantidad);
					if(caracterencontrado != NULL){
						cout << "\nCaracter inicial: " << caracterencontrado->getCaracter(); 
					}else{
						cout << "\nError: no se encontraron coincidencias";
					}
					cout << "\n";
					system("pause");
				}
				break;
			case 4:
				{
					nodo->mostrarPrincipio();
					system("pause");
				}
				break;
			case 5:
				{
					nodo->mostrarFinal();
					system("pause");
				}
				break;
		}
	}while(opcion!=6);
	return 0;
}

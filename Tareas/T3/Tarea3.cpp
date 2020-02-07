#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
using namespace std;

struct Estudiante{
	int carne;
	string nombre;
	struct Estudiante *siguiente;
};

typedef struct Estudiante *ListaEstudiante;

void insertar(ListaEstudiante &inicioLista, int carne, string nombre){
	ListaEstudiante aux;
	aux = new(struct Estudiante);
	aux->carne = carne;
	aux->nombre = nombre;
	aux->siguiente = inicioLista;
	inicioLista = aux;
}

ListaEstudiante buscar(ListaEstudiante inicioLista, int carne){
	ListaEstudiante aux;
	aux = new(struct Estudiante);
	aux = inicioLista;
	while(aux != NULL){
		if(aux->carne == carne){
			return aux;
		}
		else{
			aux = aux->siguiente;
		}
	}
}

void borrar(ListaEstudiante BorrarEstudiantes){
	ListaEstudiante aux;
	aux = new(struct Estudiante);
	aux = BorrarEstudiantes;
	if(BorrarEstudiantes == NULL){
		cout << "Error: No se encontro estudiante, no se pudo borrar nada";
	}else{
		aux->siguiente = NULL;
		cout << "Exito: se han borrado los estudiantes";
	}
}

void mostrar(ListaEstudiante inicioLista){
	while(inicioLista != NULL){
		cout << "\n" << "Carne: " << inicioLista->carne << " Nombre: " << inicioLista->nombre;
		inicioLista = inicioLista->siguiente;
	}
}

void Menu(){
	cout << "\n-------------------Menu--------------------";
	cout << "\n1. Insertar Estudiante";
	cout << "\n2. Buscar Estudiante";
	cout << "\n3. Eliminar a partir de un Estudiante";
	cout << "\n4. Mostrar Estudiantes";
	cout << "\n5. Salir";
	cout << "\nIngrese Opcion: ";
}

int main(){
	int conteoEstudiantes=1;
	ListaEstudiante inicioLista = NULL;
	int opcion;
	
	do{
		Menu(); 
		cin >> opcion;
		switch(opcion){
			case 1:
				{
					string nombre;
					cout << "\nSu carnet sera: " << conteoEstudiantes;
					cout << "\nIngrese Nombre: ";
					cin >> nombre;
					insertar(inicioLista, conteoEstudiantes, nombre);
					conteoEstudiantes++;
				}
				break;
			case 2:
				{
					int carne;
					cout << "\nIngrese Carne a buscar: ";
					cin >> carne;
					ListaEstudiante buscado = buscar(inicioLista, carne);
					cout << "\nCarne: " << buscado->carne << " Nombre: " << buscado->nombre;
				}
				break;
			case 3:
				{
					int carne;
					cout << "\nIngrese Carne para eliminar a los estudiantes: ";
					cin >> carne;
					borrar(buscar(inicioLista, carne));
				}
				break;
			case 4:
				{
					mostrar(inicioLista);
				}
				break;
			cout << endl << endl;
		}
	}while(opcion!=5);
	cout << "Gracias por utilizar el programa :p";
}

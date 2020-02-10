#include "Caracter.h"
#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

class Nodo{
	private:
		Caracter* caracter;
	public:
		Caracter* primero;
		Caracter* ultimo; 
		
		bool listaVacia(){
			if(primero==NULL || ultimo==NULL){
				return true;
			}else{
				return false;
			}
		}
		
		void insertarInicio(char c){
			Caracter* nuevoCaracter = new Caracter();
			nuevoCaracter->setCaracter(c);
			if(listaVacia()){
				primero = nuevoCaracter;
				ultimo = nuevoCaracter;
			}else{
				primero->setAnterior(nuevoCaracter);
				nuevoCaracter->setSiguiente(primero);
				primero = nuevoCaracter; 
			}
		}
		
		void mostrarPrincipio(){
			Caracter* aux = primero;
			cout << "\n";
			while(aux != NULL){
				cout << "->" << aux->getCaracter();
				aux = aux->getSiguiente();
			}
			cout << "\n";
		}
		
		void mostrarFinal(){
			Caracter* aux = ultimo;
			cout << "\n";
			while(aux != NULL){
				cout << "->" << aux->getCaracter();
				aux = aux->getAnterior();
			}
			cout << "\n";
		}
		
		void eliminarUltimo(){
			ultimo = ultimo->getAnterior();
			ultimo->setSiguiente(NULL);
		}
		
		Caracter* buscarString(string cadena, int cantidad){
			Caracter* aux = ultimo;
			Caracter* primercaracter;
			Caracter* ultimocaracter;
			int i=0;
			while(aux != NULL){
				if(i<cantidad){
					if(cadena[i]==aux->getCaracter()){
						if(i==0){
							primercaracter = aux;
						}
						if(i==cantidad-1){
							ultimocaracter = aux;
						}
						i++;
					}else{
						i=0;
						primercaracter = NULL;
						ultimocaracter = NULL;
					}
				}
				aux=aux->getAnterior();
			}
			if(primercaracter!=NULL && ultimocaracter!=NULL){
				return primercaracter;
			}else{
				return NULL;
			}
		}
};

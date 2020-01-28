#include <iostream>
using namespace std;
#include <iomanip>
#include <ctype.h>

int main(){
	
	int repetir = 0;
	char opcion = 'S';
	
	while (repetir==0){
		int numeroFC = 0;
	
	cout << "Cantidad de Filas y de Columnas para una Matriz MxM: ";
	cin >> numeroFC;
	cout << "\n Numero: " << numeroFC;
	if(numeroFC>0){
	int matriz[numeroFC][numeroFC];
	for(int f=0; f<numeroFC; f++){
		for(int c=0; c<numeroFC; c++){
			if(f==0 || c==0){
				matriz[f][c]=1;
			}
			else if(f==numeroFC-1 || c==numeroFC-1){
				
				matriz[f][c]=1;
			}
			else{
				matriz[f][c]=0;
			}
		}
	}
	for(int f=0; f<numeroFC; f++){
		cout << "\n";
		for(int c=0; c<numeroFC; c++){
			cout << "| " << matriz[f][c] << " |";
		}
	}
	}
	else{
		cout << "\nEl numero debe ser mayor que 0";
	}
	
	cout << "\n ¿Desea volver a usar el programa? S/N: ";
	cin >> opcion;
	if(opcion == 'S'){
		repetir = 0;
	}
	else if (opcion == 'N'){
		repetir = 1;
		cout << "\n Gracias por usar el programa";
	}else{
		repetir = 1;
		cout << "\n No selecciono una S o N, el programa se cerrara gracias";
	}
	
	}
	
	
	return 0;
}

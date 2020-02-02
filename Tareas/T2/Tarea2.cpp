#include <iostream>
#include <iomanip>
#include <string>
using namespace std;



class Moneda{
	private:
		string nombre;
		int cantidad;
	public:
	    agregarMoneda(string nombre1, int cantidad1){
	    	nombre = nombre1;
	    	cantidad = cantidad1;
		}
		string getNombre(){
			return nombre;
		}
		int getCantidad(){
			return cantidad;
		}
		void setNombre(string nombre1){
			nombre=nombre1;
		}
		void setCantidad(int cantidad1){
			cantidad= cantidad1;
		}	
};
class Usuario{
	private:
		int id;
		string nombre;
		int cantidad;
	public:
	    agregarUsuario(int id1, string nombre1, int cantidad1){
	    	id = id1;
	    	nombre = nombre1;
	    	cantidad = cantidad1;
		}	
		int getId(){
			return id;
		}
		string getNombre(){
			return nombre;
		}
		int getCantidad(){
			return cantidad;
		}
		void setId(int id1){
			id = id1;
		}
		void setNombre(string nombre1){
			nombre=nombre1;
		}
		void setCantidad(int cantidad1){
			cantidad= cantidad1;
		}
};

int main(){
	Usuario listaUsuarios[10];
	Usuario nuevousuario;
	Moneda nuevaMoneda;
	int idmoneda=1;
	int idusuario=1;
	int opcion;
	
	int repetir = 0;
	
	while(repetir == 0){
		
		cout << "\n--------------Menu-------------";
		cout << "\n1. Crear Moneda";
		cout << "\n2. Crear Usuario";
		cout << "\n3. Transferencia de Monedero a Usuario";
		cout << "\n4. Transferencia Usuario a Usuario";
		cout << "\n5. Salir";
		cout << "\nSelecciones una de las siguientes opciones: ";
		cin >> opcion;
	
		switch(opcion){
			case 1:
			{
				string nombreMoneda;
				int cantidadMoneda;
				cout << "\n----------------Creacion Moneda------------------";
				cout << "\nNombre Moneda: ";
				cin >> nombreMoneda;
				cout << "\nCantidad Moneda: ";
				cin >> cantidadMoneda;
				nuevaMoneda.agregarMoneda(nombreMoneda, cantidadMoneda);
			}
			break;
			case 2:
			{
				Usuario nuevoUsuario;
				string nombreusuario;
				cout << "\n----------------Creacion Usuario------------------";
				cout << "\nNombre Usuario: ";
				cin >> nombreusuario;
				nuevoUsuario.agregarUsuario(idusuario, nombreusuario, 0);
				listaUsuarios[idusuario-1] = nuevoUsuario;
				idusuario++;
			}
			break;
			case 3:
			{
				int idUsuario;
				int cantidadTransferencia;
				cout << "\n----------------Transferencia de Monedero a Usuario------------------";
				cout << "\nCantidad en Monedero: " << nuevaMoneda.getCantidad();
				for (int i=0; i<10; i++){
					if(listaUsuarios[i].getNombre()==""){
					}else{
						cout << "\n" << listaUsuarios[i].getId() << " - " << listaUsuarios[i].getNombre() << " - " << listaUsuarios[i].getCantidad();
					}
				}
				cout << "\nSeleccione un Usuario: ";
				cin >> idUsuario;
				cout << "\nCantidad de Transferencia: ";
				cin >> cantidadTransferencia;
				if (cantidadTransferencia>nuevaMoneda.getCantidad()){
					cout << "\nSu cantidad de tranferencia es mayor a la del monedero";
				}else{
					nuevaMoneda.setCantidad(nuevaMoneda.getCantidad() - cantidadTransferencia);
					listaUsuarios[idUsuario-1].setCantidad(listaUsuarios[idUsuario-1].getCantidad() + cantidadTransferencia);
				}
			}
			break;
			case 4:
				{
				int idUsuario1;
				int idUsuario2;
				int cantidadTransferencia;
				cout << "\n----------------Transferencia de Usuario a Usuario------------------";
				for (int i=0; i<10; i++){
					if(listaUsuarios[i].getNombre()==""){
					}else{
						cout << "\n" << listaUsuarios[i].getId() << " - " << listaUsuarios[i].getNombre() << " - " << listaUsuarios[i].getCantidad();
					}
				}
				cout << "\nSeleccione un Usuario que enviara transferencia: ";
				cin >> idUsuario1;
				cout << "\nSeleccione un Usuario que recibira transferencia: ";
				cin >> idUsuario2;
				cout << "\nCantidad de Transferencia: ";
				cin >> cantidadTransferencia;
				if (cantidadTransferencia>listaUsuarios[idUsuario1-1].getCantidad()){
					cout << "\nSu cantidad de tranferencia es mayor a la del usuario";
				}
				else if(idUsuario1==idUsuario2){
					cout << "\n No puede enviar monedas con el mismo usuario";
				}
				else{
					listaUsuarios[idUsuario1-1].setCantidad(listaUsuarios[idUsuario1-1].getCantidad() - cantidadTransferencia);
					listaUsuarios[idUsuario2-1].setCantidad(listaUsuarios[idUsuario2-1].getCantidad() + cantidadTransferencia);
				}
			}
				break;
			case 5:
				cout << "\nGracias por utilizar nuestro programa de monedas";
				repetir = 1;
				break;
			default:
				cout << "\nSelecciones una opcion valida";
				break;
		}
	}
}



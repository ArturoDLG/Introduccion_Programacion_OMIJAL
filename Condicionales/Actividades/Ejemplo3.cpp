#include<iostream>
using namespace std;

int main(){
	//AND
	bool producto_disponible = false;
	int precio = 60;
	if(producto_disponible && (precio <= 50)){
    	cout << "Producto comprado" << endl;
	}
	else{
    	cout << "Producto no disponible" << endl;
	}	
	
	//OR
	string sabor;
	cout << "De que va a querer su agua fresca? ";
	cin >> sabor;
	if(sabor.compare("Jamaica")== 0 || sabor.compare("Limon") == 0 || sabor.compare("Tamarindo") == 0){
    	cout << "Tome su agua de " << sabor << endl;
	}
	else{
    	cout << "No hay agua de " << sabor << endl;
	}
	
	//NOT
	int dia = 12;
	if(not(dia == 12)){
    	cout << "Hoy no es 12 de Noviembre" << endl;
	}
	return 0;	
}



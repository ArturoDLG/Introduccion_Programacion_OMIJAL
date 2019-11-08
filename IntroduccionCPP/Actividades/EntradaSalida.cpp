//Actividad de lectura e impresion de un numero entero y flotante

//Aqui van las librerias
#include<iostream> //Libreria de entradas y salidas estandar
using namespace std;

int main(){
	//Aqui inicia nuestro programa
	//Declaracion de variables
	int mi_entero;
	float mi_flotante;
	//Entrada de datos
	cout << "Ingresa un numero entero: ";
	cin >> mi_entero; // cin lee los datos ingresados por consola
	cout << "Ingresa un numero flotante: ";
	cin >> mi_flotante;
	
	//Salida de datos
	cout << "Este es un numero entero: " << mi_entero << endl;
	cout << "Este es un numero flotante: " << mi_flotante << endl;
	return 0; //aqui termina nuestro programa
}

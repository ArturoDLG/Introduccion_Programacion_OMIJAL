/*Actividad:
Calcular la suma, resta, multiplicacion, division de 2 numeros enteros*/

//Aqui van las librerias
#include<iostream> //Libreria de entradas y salidas estandar
using namespace std;

int main(){
	//Aqui inicia nuestro programa
	//Declaracion de variables
	int numero1, numero2;
	
	//Entrada de datos
	cin >> numero1;
	cin >> numero2;
	
	//Salida de datos
	cout << numero1 + numero2 << endl; //suma
	cout << numero1 - numero2 << endl; //resta
	cout << numero1 * numero2 << endl; //multiplicacion
	cout << numero1 / numero2 << endl; //division
	
	return 0; //aqui termina nuestro programa
}

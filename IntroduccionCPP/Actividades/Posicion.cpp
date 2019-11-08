/*Actividad:
Ingresar una frase, pedir una letra y numero (entre 1 y la longitud de la frase)
, y colocar la letra en la posicion dada*/

//Aqui van las librerias
#include<iostream> //Libreria de entradas y salidas estandar
#include<string> //Libreria de manjo de strings
using namespace std;

int main(){
	//Aqui inicia nuestro programa
	//Declaracion de variables
	string frase;
	char letra;
	int numero;
	
	//Entrada de datos
	getline(cin, frase);
	cin >> letra;
	cin >> numero;
	
	//Sustituir la letra en la posicion
	frase[numero - 1] = letra;
	
	//Salida de datos
	cout <<  frase << endl;
	
	return 0; //aqui termina nuestro programa
}

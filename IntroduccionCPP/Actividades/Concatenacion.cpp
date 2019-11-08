/*Actividad:
Solicitar nombre y municipio de una persona y mostrar en pantalla el siguiente mensaje:
Hola mi nombre es <nombre> y soy de <municipio>*/

//Aqui van las librerias
#include<iostream> //Libreria de entradas y salidas estandar
#include<string> //Libreria de manjo de strings
using namespace std;

int main(){
	//Aqui inicia nuestro programa
	//Declaracion de variables
	string nombre, municipio;
	
	//Entrada de datos
	cin >> nombre;
	cin.ignore(); // limpia entrada
	getline(cin, municipio);
	
	//Salida de datos
	cout << "Hola mi nombre es "<< nombre << " y soy de " << municipio << endl;
	
	return 0; //aqui termina nuestro programa
}

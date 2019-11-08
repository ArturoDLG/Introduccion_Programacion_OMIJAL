/*Actividad:
Calcular el area de un circulo con un radio r, con un valor de pi de 3.1416*/

//Aqui van las librerias
#include<iostream> //Libreria de entradas y salidas estandar
using namespace std;

int main(){
	//Aqui inicia nuestro programa
	//Declaracion de variables
	float r, area;
	const float PI = 3.1416;
	
	//Entrada de datos
	cin >> r;
	
	//calcular el area del circulo
	area = r * r * PI; // PI * r ^ 2
	
	//Salida de datos
	cout << area << endl;
	
	return 0; //aqui termina nuestro programa
}

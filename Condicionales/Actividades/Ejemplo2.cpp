#include<iostream>
#include<string>
using namespace std;

int main(){
	char letra = 'O';
	string palabra = "OMIJAL";
	if(letra == palabra[0]){ //comparar caracteres
    	cout << "la letra esta en la palabra" << endl;
	} 	
	letra = 'K';
	if(letra > palabra[3]){//comparar si un caracter es mayor a otro
    	cout << "la letra es mayor" << endl;
	} 
	if(letra < palabra[5]){//comparar si un caracter es menor a otro
    	cout << "la letra es menor" << endl;
	} 
	
	
	string palabra1 = "manzana verde";
	string palabra2 = "manzana roja";
	/*compare(): 
 	= 0 : las palabras son iguales
 	< 0 : es menor a la palabra que se compara
 	> 0 : son diferentes
	*/
	//comparar una palabra con otra
	if (palabra1.compare(palabra2) != 0){
    	cout << palabra1 << " no es una " << palabra2 << endl;
	}
	//comparar una seccion de la palabra con otra
	// (indice, longitud, palabra)
	if (palabra1.compare(0,7,"manzana") == 0){
    	cout << palabra1 << " es una manzana" << endl;
	}
	//comparar una seccion de la palabra, con la seccion de otra palabra
	//(indice, longitud, palabra, indice, longitud)
	if (palabra1.compare(0,7,palabra2,0,7) == 0){
    	cout << "ambas son manzanas" << endl;
	}
	return 0;
}


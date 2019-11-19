//acciones con arreglos fijos
#include<iostream>
using namespace std;

int main(){
	int pares[5] = {0, 2, 4, 6, 8}; //declarando los valores de arreglo fijo
	for(int i = 0; i < 5; i++){
	    cout << pares[i] << endl;
	} 
	
	int numeros[5] = {10, 20}; //declarando un arreglo con menos elemntos de los fijados
	for(int i = 0; i < 5; i++)
	    cout << numeros[i] << " ";
	
	cout << endl;
	
	char animal[] = {'o','s','o'};//declarando un arreglo sin un tamaño fijo
	for(int i = 0; i < 3; i++)
	    cout << animal[i];
	
	cout << endl;
	
	float alturas[4];
	for(int i = 0; i < 4; i++)
	    cin >> alturas[i]; // ingresar valores
	
	cout << endl;
	
	for(int j = 0; j < 4; j++)
	    cout << alturas[j] << " "; //imprimir el contenido del arreglo 
	    
	return 0;
}


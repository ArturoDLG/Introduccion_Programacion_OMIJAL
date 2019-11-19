//Actividad 1
//Dado un grupo de n numeros, obtener los que sean multiplos de k
#include<iostream>
using namespace std;

int main(){
	int n, k;
	cin >> n; //leer n
	int numeros[n]; // crear un arreglo de tamaño n
	for(int i =0; i < n; i++)
		cin >> numeros[i]; // leer los n numeros
	cin >> k; // leer k
	for(int j =0; j < n; j++){
		if(numeros[j]%k == 0) //imprimir si numeros[j] es multiplo de k
			cout << numeros[j] << " ";
	}
	cout << endl;
	return 0;
}

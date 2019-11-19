//Actividad 2
//Dado un grupo de n nombres, mostrar aquellos con una determinada inicial
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	int n;
	char c;
	vector<string> nombres;
	string nombre;
	cin >> n; //leer n
	for(int i =0; i < n; i++){
		cin >> nombre;
		nombres.push_back(nombre);
	}
	cin >> c; // leer c
	for(int j =0; j < n; j++){
		if(nombres[j][0] == c) //imprimir si numeros[j] es multiplo de k
			cout << nombres[j] << endl;
	}
	return 0;
}

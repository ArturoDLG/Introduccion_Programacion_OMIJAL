//Suma de n numeros
#include<iostream>
using namespace std;

int main(){
	int n, numero, suma = 0;
	cin >> n;
	// manera de leer con while
	/*
	while(n > 0){
		cin >> numero;
		suma += numero; //incrementar en numero a suma
		n--;
	}*/
	// manera de leer con un for
	for(int i = 0; i < n ; i++){
		cin >> numero;
		suma += numero; //incrementar en numero a suma
	}
	cout << suma << endl;
}

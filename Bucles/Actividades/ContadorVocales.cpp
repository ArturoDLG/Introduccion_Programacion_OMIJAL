#include<iostream>
#include<string>
using namespace std;

int main(){
	string palabra = "OMIJAL 2019";
	int contador = 0;
	for(int i = 0; i < palabra.length(); i++){
	    //contar vocales mayusculas
	    if(palabra[i] == 'A' || palabra[i] == 'E' || palabra[i] == 'I' 
	       || palabra[i] == 'O' || palabra[i] == 'U'){
	        contador++;
	    }
	}
	cout << contador << endl;
}

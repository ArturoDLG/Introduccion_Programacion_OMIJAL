#include<iostream>
using namespace std;

int main(){
	//estructura simple
	int today;
	cout << "Ingresa un dia del mes: ";
	cin >> today;
	if(today == 20){
    	cout << "Hoy 20 de noviembre es aniversario de la Revolucion Mexicana" << endl;
	}
	//doble
	bool hay_camion = false;
	if(hay_camion){
    	cout << "Tienes suerte, sube al camion" << endl;
	}
	else{
    	cout << "Suerte para la proxima" << endl;
	}
	//multiple
	char operacion;
	int n1, n2;
	cout << "Elija una operacion aritmetica: {+, -, *,/} :";
	cin >> operacion;
	cout << "Ingrese 2 numeros: ";
	cin >> n1;
	cin >> n2;
	if(operacion == '+')
	    cout << n1 << " + " << n2 << " = "<< n1 + n2 << endl;
	else if(operacion == '-')
	    cout << n1 << " - " << n2 << " = "<< n1 - n2 << endl;
	else if(operacion == '*')
	    cout << n1 << " * " << n2 << " = "<< n1 * n2 << endl;    
	else if(operacion == '/')
	    cout << n1 << " / " << n2 << " = "<< n1 / n2 << endl;    
	else
	    cout << "Operacion no valida" << endl;
	//anidadas	
	int numero;
	cin >> numero;
	if(numero > 0){
    	if(numero % 2 == 0){
        	cout << "El numero es par" << endl;
    	}
    	else{
        	cout << "El numero es impar" << endl;
    	}
	}
	else{
    	cout << "El numero es menor a cero" << endl;
	}
	return 0;
}


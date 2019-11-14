
#include<iostream>
using namespace std;

int main(){
	int num;
	bool bandera = true; // variable bandera
	/*Una variable bandera nos sirve para indicar si hemos
	realizado una condicion anteriormente*/
	do{
	    cin >> num;
	    if(num % 5 == 0){
	        cout << num << " es multiplo de 5" << endl;
	        bandera = false;
	    }
	}while(bandera);
	
	return 0;
}


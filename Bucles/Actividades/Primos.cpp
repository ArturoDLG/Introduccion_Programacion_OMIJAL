//Verificar si un numero es primo o no
#include<iostream>
using namespace std;

int main(){
	int primo, divisor = 2;
	bool es_primo = true; // variable bandera
	cin >> primo;
	while(divisor < primo){
    	if(primo % divisor == 0){
        	es_primo = false;
        	break; // break interrumpe un bucle
    	}
    	divisor++;
	}
	
	if(es_primo)
    	cout << primo << " es primo" << endl;
	else
    	cout << primo << " no es primo" << endl;
    
	return 0;
}

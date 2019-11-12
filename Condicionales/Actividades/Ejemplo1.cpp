#include<iostream>
using namespace std;

int main(){
	int a = 1, b = 6;
	// menor que (<)
	if(a < b){
    	cout << a << " es menor a " << b << endl;
	}
 	// mayor que (>)
	if(b > a){
    	cout << b << " es mayor a " << a << endl;
	}
	a = 6;
	// menor o igual que
	if(a <= b){
    	cout << a << " es menor o igual a " << b << endl;
	}
	b = 7;
	// mayor o igual que
	if(b >= a){
    	cout << b << " es mayor o igual a " << a << endl;
	}
	int c = 20, d = 20, e = 90;
	// igual que (==)
	if(c == d){
    	cout << c << " es igual a " << d << endl;
	}
 	// diferente que (!=)
	if(d != e){
    	cout << d << " es diferente a " << e << endl;
	}
	return 0;
}

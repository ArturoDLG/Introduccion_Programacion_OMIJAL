//Ejemplos con vectores
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	vector<string> lista; //declearamos un vector de strings
	cout << lista.size() << endl; //vemos el tamaño del vector 
	lista.push_back("Andres"); //insertamos elementos con push_back
	lista.push_back("Beatriz");
	lista.push_back("Filiberto");
	cout << lista.size() << endl; //vemos el tamaño despues de insertar elementos
	
	for(int i = 0; i < lista.size(); i++) //recorremos con un bucle for la lista
    cout << lista[i] << endl;
	
	cout << lista[0][0] << endl; //acceder por caracteres a los vectores de cadenas
	for(int i = 0; i < lista.size(); i++){
	    for(int j = 0; j < lista[i].length(); j++){
	        cout << lista[i][j] << " ";
	    }
	}
	
	cout << endl;
	
	vector<int> multiplos_tres; //creamos un vector de enteros
	for(int i = 3; i <= 30; ){
	    multiplos_tres.push_back(i); //insertar los elemntos
	    i+=3;
	}
	cout << multiplos_tres[0] << endl; //accedemos a ellos con []
	cout << multiplos_tres[4] << endl;
	cout << multiplos_tres[9] << endl;
	
	cout << lista[0] << endl; //ver el primer elemento
	lista.insert(lista.begin(), "Denisse"); //insertar un elemento en la primera posicion
	cout << lista[0] << endl; //ver el primer elemento
	cout << lista[1] << endl; //ver al elemento en la posicion 1
	lista.insert(lista.begin() + 1, "Juan"); //insertar un elemento en la posicion 1
	cout << lista[1] << endl; //ver al elemento en la posicion 1
	cout << lista[4] << endl; // ver el ultimo elemento
	lista.insert(lista.end(), "Claudia"); // insertar un elemento al final
	cout << lista[5] << endl; // ver el ultimo elemento
	
	cout << multiplos_tres[0] << endl; // ver el primer elemento
	multiplos_tres.erase(multiplos_tres.begin()); // eliminar primer elemento
	cout << multiplos_tres[0] << endl; // ver el primer elemento
	
	int i = multiplos_tres.size(); 
	cout << i << endl;
	while(multiplos_tres.empty() == false){ //mientras el vector no este vacio
	    cout << multiplos_tres[i] << " ";
	    multiplos_tres.pop_back(); //eliminar el ultimo elemento
	    i--;
	}
	
	return 0;
}


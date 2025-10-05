#include <iostream>
#include <vector>
#include "DyV.h"

using namespace std;

int main (){
	//Prueba 1: INT ASCENDENTE
	vector <int> v1 = {1, 3, 5, 7, 9, 11};
	int x1 = 7;
	int pos1 = BusquedaBinaria(v1, x1, 0, v1.size()-1);
	cout << "Posicion de " << x1 << "en v1: " << pos1 << endl;

	//Prueba 2: FLOAT ASCENDENTE
	 vector<float> v2 = {0.5, 1.2, 2.8, 3.3, 4.9};
    	 float x2 = 3.3;
   	 int pos2 = BusquedaBinaria(v2, x2, 0, v2.size() - 1);
	 cout << "Posición de " << x2 << " en v2: " << pos2 << endl;

	 //Prueba 3: CHAR ASCENDENTE
	 vector<char> v3 = {'a', 'c', 'f', 'k', 'z'}
	 char x3 = 'f';
	 int pos3 = BusquedaBinaria(v3, x3, 0, v3.size() - 1);
   	 cout << "Posición de '" << x3 << "' en v3: " << pos3 << endl;

	 //Prueba 4: NO ENCONTRADO
	 int x5 = 100;
   	 int pos5 = BusquedaBinaria(v1, x5, 0, v1.size() - 1);
   	 cout << "Posición de " << x5 << " en v1: " << pos5 << " (no encontrado)" << endl;
   
	 return 0;
}


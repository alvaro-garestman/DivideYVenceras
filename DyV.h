#ifndef DYV_H
#define DYV_H
#include <vector>
using namespace std;

template <typename T>

int BusquedaBinaria (const vector <T>& v, T x, int ini, int fin){
	
	if(ini > fin)
		return -1;
	int medio = (ini + fin) / 2;

	if (v[medio] == x)
		return medio;
	else if (v[medio] > x)
		return BusquedaBinaria(v, x, ini, medio -1);
	else 
		return BusquedaBinaria(v, x, medio + 1, fin);
}

template <typename T>

int BusquedaBinaria_INV (const vector <T>& v, T x, int ini, int fin){
	
	if (ini > fin)
		return -1;
	
	int medio = (ini + fin) / 2;
	
	if (v[medio] == x)
		return medio;
	else if (v[medio] < x)
		return BusquedaBinaria_INV(v, x, ini, medio -1);
	else 
		return BusquedaBinaria_INV(v, x, medio + 1 , fin);
}

template <typename T>

int QuickSort (const vector <T>& v, int ini, int fin){
       if (ini < fin){
		int pivot = Partition(v, ini, fin);
 		QuickSort(v, ini, pivot -1)
		QuickSort(v, pivot +1, fin)
		}
}

template <typename T>
int Partition(const vector <T>& v, int ini, int fin){
	T x = v[fin];
	int i = ini;

	for(int j = ini; j < fin; j++){
		if (v[j] <= x){
			swap (v[i], v[j];
			i++;
		}
	}
	swap(v[i], v[fin]);
	return i;
}
#endif 


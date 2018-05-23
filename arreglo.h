#include <iostream>
#include <string>
#include <stdlib.h>//new y delete
using namespace std;


class Arreglo {
private:
	
public:
					int *arre;
					int tamano;
					int *arre2;
					
					Arreglo(int);
					
					void insertar();
					void eliminar();
					void vaciar();
					void mostrar();
					void reemplazar();
					~Arreglo();
};

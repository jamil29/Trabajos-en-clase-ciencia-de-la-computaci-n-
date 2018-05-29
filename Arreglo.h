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
					
					void insertar_valor();
					void eliminar_valor();
					void vaciar_valor();
					void mostrar_valor();
					void reemplazar_valor();
					~Arreglo();
};

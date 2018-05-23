#include <iostream>
#include "Arreglo.h"
#include <stdlib.h>

using namespace std;


int main() {

	Arreglo valor(7);
	valor.arre[0] = 10;
	valor.arre[1] = 15;
	valor.arre[2] = 16;
	valor.arre[3] = 26;
	valor.arre[4] = 36;
	valor.arre[5] = 446;
	valor.arre[6] = 116;
	
	

	valor.insertar();
	valor.eliminar();
	//valor.vaciar();
	//valor.reemplazar();
	
	valor.mostrar();
	




	system("pause");
	return 0;
}

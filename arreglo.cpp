#include"Arreglo.h"

Arreglo::Arreglo(int tamano) {
	
	this -> tamano = tamano;
	arre = new int[tamano];
	arre2 = new int[tamano];

	

}


void Arreglo::insertar_valor() {
	int nElem;
	tamano += 1;
	cout << "En que posición deseas cambiar "; cin >> nElem;
	
	for (int i = tamano-1; i >=0 ; i--) {
		
		if (i == nElem) {
			break;
		}
		arre[i] = arre[i - 1];
		arre[i - 1] = arre2[i - 1];
	}

	cout << "ingrese el elemento: "; cin >> arre[nElem];
}

void Arreglo::vaciar_valor() {
	tamano = 1;
	arre[0] = 0;
}
void Arreglo::reemplazar_valor() {
	int nElem;
	cout << "posición del valor a reemplazar "; cin >> nElem;
	cout << "cual es tu numero ? : "; cin >> arre[nElem];
}

void Arreglo::mostrar_valor() {
	for (int i = 0; i<tamano; i++) {
		cout << arre[i] << " - ";
	}
	cout << endl;
}

Arreglo::~Arreglo() {

	delete[] arre2;
}


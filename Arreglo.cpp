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
int Arreglo::mayor(){
    int may=arre[0];
    for(int i=0;i<tamano;i++){
        if(arre[i]>may){
            may=arre[i];}}
    return may;
}

void Arreglo::invertir(){
	for(int i=1;i<=(tamano/2);i++){
        int pro=0;
		
		
        pro=arre[i-1];
        arre[i-1]=arre[len-i];
        arre[tamano-i]=pro;}		
}


int Arreglo::menor(){
    int men=arre[0];
    for(int i=0;i<tamano;i++){
        if(arre[i]<men){
            men=arre[i];}}
    return men;
}

float Arreglo::promedio(){
    float promedio=0;
    for(int i=0;i<tamano;i++){
        prom+=arre[i];}
    promedio /=tamano;
    return prom;
}

bool Arreglo::primo(int x){
    int i=1,cant_mult=0;
    while(i<=x){
        !(x%i)?cant_mult+=1:cant_mult=cant_mult;
        i++;}
    if(cant_mult>2){
        return false;}
    else{
        return true;}
}


int Arreglo::mayorprim(){
    int may=0;
    for(int i=0;i<tamano;i++){
        if(primo(arr[i])==true){
            if(arre[i]>may){
                may=arre[i];}}
    }
    if(may==0){
    	cout<<"No hay numeros primos"<<endl;}
    return may;
}


int Arreglo::menor_prim(){
    int men=0;
    for(int i=0;i<tamano;i++){
        if(esPrim(arre[i])==true){
        	if(men==0){
        		men=arre[i];}

            if(arre[i]<men){
                men=arre[i];}}
    }
    if(men==0){
    	cout<<"No hay numeros primos"<<endl;}
    return men;
}

void Arreglo::ordenar(){
    for(int i=1;i<tamano;i++){
    	for(int j=0;j<tamano-1;j++){
			 if(arre[j]>arre[j+1]){
			 	int c=0;
			 	c=arre[j];
                arre[j]= arre[j+1];
                arre[j+1]=c;} 
    	}
               	
    }
          
}

int Arreglo::sumar(){
    int sumatoria=0;
    for(int i=0;i<tamano;i++){
        sumatoria+=arre[i];}
    return sumatoria;
}

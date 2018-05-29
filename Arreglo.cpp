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

void Arreglo::invertir_valor(){
	for(int i=1;i<=(tamano/2);i++){
        int pro=0;
		
		
        pro=arre[i-1];
        arre[i-1]=arre[len-i];
        arre[tamano-i]=pro;}		
}


int Arreglo::menor_valor(){
    int men=arre[0];
    for(int i=0;i<tamano;i++){
        if(arre[i]<men){
            men=arre[i];}}
    return men;
}

float Arreglo::promedio_valor(){
    float promedio=0;
    for(int i=0;i<tamano;i++){
        prom+=arre[i];}
    promedio /=tamano;
    return prom;
}

bool Arreglo::primo_valor(int pivo){
    int i=1,valor=0;
    while(i<=pivo){
	    if(pivo%i){
		    valor+=1;
		    i++;
   
    if(valor>2){
        return false;}
    else{
        return true;}
}


int Arreglo::mayorprim_valor(){
    int mayor_valor=0;
    for(int e=0;e<tamano;e++){
	    
        if(primo_valor(arre[e])==true){
		
		
            if(arre[e]>may){
                may=arre[e];}}
    }
    if(mayor_valor==0){
    	return 0;
    return may;
}


int Arreglo::menor_prim_valor(){
    int men=0;
    for(int e=0;e<tamano;e++){
        if(primo_valor(arre[e])==true){
        	if(men==0){
        		men=arre[e];}

            if(arre[e]<men){
                men=arre[e];}}
    }
    if(men==0){
    	return 0;
    return men;
}

void Arreglo::ordenar_valor(){
    for(int i=1;i<tamano;i++){
    	for(int cot=0;cot<tamano-1;cot++){
			 if(arre[cot]>arre[cot+1]){
			 	int new=0;
			 	new=arre[cot];
                arre[cot]= arre[cot+1];
                arre[cot+1]=new;} 
    	}
               	
    }
          
}

int Arreglo::sumar_valor(){
    int sumatoria=0;
    for(int i=0;i<tamano;i++){
        sumatoria+=arre[i];}
    return sumatoria;
}

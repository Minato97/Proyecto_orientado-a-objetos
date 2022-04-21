#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;
//Ignacio Andrade


int main(){
	setlocale(LC_CTYPE, "SPANISH");
	//Declaramos
	int lista1[100];
	int lista2[100];
	int tam,i,mayor1=0,mayor2=0;
	
	//Pedimos el tamaño de las listas
	cout<<"Por favor ingrese el número de datos que van a tener las lista"<<endl;
	cin>>tam;
	
	//Llenado de lista 1
	cout<<"Llenamos la lista número 1"
	for(i=0;i<tam;i++){
		cout<<"Por favor ingrese el número que ocupará la posición "<<i+1<<endl;
		cin>>lista1[i];
	}
	
	//Llenado de lista 2
	cout<<"Llenamos la lista número 2"
	for(i=0;i<tam;i++){
		cout<<"Por favor ingrese un número en la posición "<<i+1<<endl;
		cin>>lista2[i];
	}
	
	//Buscamos el número mayor de cada lista
	for(i=0;i<tam;i++){
		if (lista1[i]>mayor1){
			mayor1=lsta1[i];
		}
	}
	
	for(i=0;i<tam;i++){
		if (lista2[i]>mayor2){
			mayor2=lsta2[i];
		}
	}
	
	
	getch();
	return 0;
}

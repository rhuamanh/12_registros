#include <iostream>
using namespace std;

struct persona{
	char nombres [30];
	int dni;
	int edad;
}datos[1000];

int main (){
	int n, cant=0;
	float suma=0, prom;
	cout<<"Ingrese el numero total de personas:";
	cin>>n;
	for (int i=0; i<n; i++){
		cout<<"\n***Datos de la persona n°"<<i+1<<"***"<<endl;
		cout<<"\nIngrese el nombre:";
		cin>>datos[i].nombres;
		cout<<"Ingrese el DNI:";
		cin>>datos[i].dni;
		cout<<"Ingrese la edad:";
		cin>>datos[i].edad;
		suma=suma+datos[i].edad;
		if (datos[i].edad>50){
			cant=cant+1;
		}
	}
	prom=suma/n;
	cout<<"\n==>Las personas que superan los 50 años de edad son:"<<cant<<endl;
	cout<<"\n==>El promedio de las edades es:"<<prom<<endl;
	cout<<"\n---LOS DATOS DE TODAS LAS PERSONAS---"<<endl;
	for (int i=0; i<n; i++){
		cout<<"\nPersona"<<i+1<<endl;
		cout<<"\nNombre:"<<datos[i].nombres<<endl;
		cout<<"DNI:"<<datos[i].dni<<endl;
		cout<<"Edad:"<<datos[i].edad<<endl;
	}
	return 0;
}
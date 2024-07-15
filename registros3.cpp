#include <iostream>
using namespace std;

struct personas{
	char nombre [20];
	int dia;
	int mes;
	int year;
}datos[100000];

int main (){
	int n, m=1;
	cout<<"Ingrese la cantidad de personas:";
	cin>>n;
	for (int i=0; i<n; i++){
		cout<<"\n***Datos de la persona n°"<<i+1<<"***"<<endl;
		cout<<"\nIngrese el nombre:";
		cin>>datos[i].nombre;
		cout<<"Ingrese dia de nacimiento:";
		cin>>datos[i].dia;
		cout<<"Ingrese el mes de nacimiento:";
		cin>>datos[i].mes;
		cout<<"Ingrese el año de nacimiento:";
		cin>>datos[i].year;
		}
	while (m!=0){
		cout<<"\n===>Ingrese un mes:";
		cin>>m;
		cout<<"\nLos datos de las personas de este mes son:"<<endl;
		for (int i=0; i<n; i++){
			if (datos[i].mes==m){
				cout<<"\nNombre:"<<datos[i].nombre<<endl;
				cout<<"Dia de nacimiento:"<<datos[i].dia<<endl;
				cout<<"Mes de nacimiento:"<<datos[i].mes<<endl;
				cout<<"Año de nacimiento:"<<datos[i].year<<endl;
			}
		}
	}
	return 0;
}
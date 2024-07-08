//ejercicio 1
#include <iostream>
#include <string>
using namespace std;
struct empleado{
	string nombre;
	char sexo;
	int sueldo;
};
int main (){
	int n, mayor=0, menor=10000;
	cout<<"ingrese la cantidad de trabajadores:";
	cin>>n;
	empleado empleados[n];
	char sexo[n]; 
	double sueldo[n];
	string nombre[n];
	for (int i=0; i<n; i++){
		cout<<i+1<<".Ingrese el nombre del empleado:";
		cin>>nombre[i];
		cout<<i+1<<".Ingrese el tipo de sexo:";
		cin>>sexo[i];
		cout<<i+1<<".Ingrese su sueldo:";
		cin>>sueldo[i];
	}
	for (int i=0; i<mayor; i++){
		if (sueldo[i]>mayor){
			mayor=sueldo[i];
		}
	}
	for (int i=0; i<menor; i++){
		if (sueldo[i]<menor){
			menor=sueldo[i];
		}
	}
	cout<<"el sueldo mayor es:"<<endl;
	cout<<mayor;
	cout<<"el sueldo menor es:"<<endl;
	cout<<menor;
	return 0;
}
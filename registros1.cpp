#include <iostream>
using namespace std;

struct empleados{
	char nombres [20];
	char sexo;
	float sueldo;
}datos[100];

int main (){
	system ("cls");
	int n, mayor=0, menor=1000000, contador1=0, contador2=0;
	cout<<"ingrese el numero de empleados:";
	cin>>n;
	for (int i=0; i<n; i++){
		system ("cls");
		cout<<"--Datos Del empleado "<<i+1<<"--"<<endl;
		cout<<"\nIngrese el nombre del empleado:";
		cin>>datos[i].nombres;
		cout<<"Ingrese el sexo del empleado:";
		cin>>datos[i].sexo;
		cout<<"Ingrese el sueldo del empleado:";
		cin>>datos[i].sueldo;
		if (datos[i].sueldo>mayor){
			mayor=datos[i].sueldo;
			contador1=i;
		}
		if (datos[i].sueldo<menor){
			menor=datos[i].sueldo;
			contador2=i;
		}
	}
	cout<<"\n***El empleado con el mayor sueldo***"<<endl;
	cout<<"\n"<<"Nombre:"<<datos[contador1].nombres<<endl;
	cout<<"Sexo:"<<datos[contador1].sexo<<endl;
	cout<<"Sueldo:"<<datos[contador1].sueldo<<endl;
	cout<<"\n***El empleado con el menor sueldo***"<<endl;
	cout<<"\n"<<"Nombre:"<<datos[contador2].nombres<<endl;
	cout<<"Sexo:"<<datos[contador2].sexo<<endl;
	cout<<"Sueldo:"<<datos[contador2].sueldo<<endl;
	system ("pause");
	return 0;
}
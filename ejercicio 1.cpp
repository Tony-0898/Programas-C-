//Crear un programa que contenga una estructura llamada Alumno que permita registrar y mostrar por 
//pantalla los datos generales de un alumno.


#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void alumno();
int main(){
	
	alumno();
	
	system("pause");
return 0;	
}

void alumno(){
	int  a,c=0,e,f;
	char b[30],d[30],g[30];
	cout<<"-+--+-+-+-+-+-+Bienvendio al sistema de Registro de Alumnos-+-+-+-+-+"<<endl;
	cout<<" "<<endl;
	cout<<"Ingrese la cantidad de datos a ingresar: "<<endl;
	cin>>a;
	for(int i=0;i<a;i++){
		
			cout<<"Ingrese el nombre del alumno: "<<endl;
			cin>>b;
			cout<<"Ingrese carrera: "<<endl;
			cin>>d;
			cout<<"Ingrese Promedio del alumno: "<<endl;
			cin>>e;
			cout<<"Ingrese la cantidad de clases cursadas: "<<endl;
			cin>>f;
			cout<<"Ingrese el centro de estudios: "<<endl;
			cin>>g;
			
			cout<<"Los datos Ingresados y mostrados son: "<<endl;
			cout<<b<<endl;
			cout<<d<<endl;
			cout<<e<<endl;
			cout<<f<<endl;
			cout<<g<<endl;
			
			c++;
			
	}
	cout<<"La cantidad de datos Ingresados es: "<<c<<endl;
	

	
}

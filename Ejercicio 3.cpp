


#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void alumno();
void persona();

	int  a,c=0,e,f;
	char b[30],d[30],g[30];
	int  a1,c1=0,e1,f1;
	char b1[30],d1[30],g1[30];

int main(){
	
	alumno();
	persona();
	
	system("pause");
return 0;	
}

void alumno(){

	cout<<"-+--+-+-+-+-+-+Bienvendio al sistema de Registro de Persona-+-+-+-+-+"<<endl;
	cout<<" "<<endl;

		
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
			
		
	

	
}

void persona(){
	
	cout<<"Ingrese el nombre de la Persona: "<<endl;
			cin>>b1;
			cout<<"Ingrese Lugar de residencia: "<<endl;
			cin>>d1;
			cout<<"Ingrese Años de la persona: "<<endl;
			cin>>e1;
			cout<<"Ingrese Numero de telefono : "<<endl;
			cin>>f1;
			cout<<"Ingrese profesion : "<<endl;
			cin>>g1;
			
			cout<<"Los datos Ingresados y mostrados en el apartado persona son: "<<endl;
			cout<<b1<<endl;
			cout<<d1<<endl;
			cout<<e1<<endl;
			cout<<f<<endl;
			cout<<g1<<endl;
			
	     	cout<<"Los datos Ingresados y mostrados en el apartado Alumno son: "<<endl;
			cout<<b<<endl;
			cout<<d<<endl;
			cout<<e<<endl;
			cout<<f<<endl;
			cout<<g<<endl;
	
}

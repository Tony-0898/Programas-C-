

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void PedirDatosLaptop();
int main(){
	
	PedirDatosLaptop();
	
	system("pause");
	
return 0;	
}

void PedirDatosLaptop(){

		int  a,c=0,f;
	char b[30],d[30],g[30],e[50];
	cout<<"-+--+-+-+-+-+-+Bienvendio al sistema de Registro Equipos -+-+-+-+-+"<<endl;
	cout<<" "<<endl;
	cout<<"Ingrese la cantidad de datos a ingresar: "<<endl;
	cin>>a;
	for(int i=0;i<a;i++){
		
			cout<<"Ingrese el nombre del Equipo: "<<endl;
			cin>>b;
			cout<<"Ingrese Marca: "<<endl;
			cin>>d;
			cout<<"Ingrese codigo del producto: "<<endl;
			cin>>e;
			cout<<"Ingrese el año de lote: "<<endl;
			cin>>f;
			cout<<"Ingrese el nombre del proveedor: "<<endl;
			cin>>g;
			
			cout<<"Los datos Ingresados y mostrados son: "<<endl;
			cout<<b<<endl;
			cout<<d<<endl;
			cout<<e<<endl;
			cout<<f<<endl;
			cout<<g<<endl;
			
			c++;
			
	}
	cout<<"La cantidad de Equipos Ingresados es: "<<c<<endl;
	

	
}

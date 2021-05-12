#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	
	char libros[5][50];
	char tomo[30],autor[30];
	int numero;
	 
	 for ( int i =0; i<5;i++){
	 	cout<<"Igrese los nombres de los Libros: "<<endl;
	 	cin.getline(libros[i],50);
	 	
	 	cout<<"ingrese el tomo del libro: "<<endl;
	 	cin>>tomo;
	 	cout<<"Ingrese el numero de registro: "<<endl;
	 	cin>>numero;
	 	cout<<"Ingrese el nombre del autor: "<<endl;
	 	cin>>autor;
	 	
	 	
	 }
	 cout<<" "<<endl;
	 cout<<"Los libros almacenados son: "<<endl;
	 
	 	 for ( int i =0; i<5;i++){
	 	cout<<" "<<endl;
	 	cout<<libros[i]<<endl;
	 
	 	
	 }
	 
	 
	 cout<<" "<<endl;
	 cout<<" "<<endl;
	 
	 system ("pause");
	 return 0;
	 
	
}

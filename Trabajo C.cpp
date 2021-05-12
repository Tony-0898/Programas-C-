// Programa realizado por Marinely estudiante UPNFM

/// estas son las librerias a utilizar durante la ejecucion del programa
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<fstream>

using namespace std;

/// esta es la funcion principal del programa
int main(){
	
	//declaracion de las variables a utilizar tanto, numericas como alfabeticas
	int a,b,c,d,e,f,g;
	int cod=1,dia,mes,anio,subtotal,impuesto,descuento,total,cantidad,precio,contador,pr;
	char cliente[20];
	char producto[50];
	char frase[80],procedencia[80],tipo[80],proveedor[80],nproducto[80],marca[80];
	int canti,valor;
	int i;
	string texto;
	
// declaracion de variables a utilizar para la creacion y escritura de un archivo de texto
	ofstream archivo;
	ofstream archivo2;
	ofstream archivo3;
	ofstream archivo4;
	ofstream archivo5;
	ifstream archivo1;
	
	// bucle de menu de repeticion durante la ejecucion (do while)
	
	do{
		
	// menu Principal de la ejecucion e interaccion con el usuario
	
		cout<<"+-+-+-+-+-+-+-+-+-+-Bienvenido al menu de Facturacion +-+-+-+-+-+-+-+-+-+-"<<endl;
		cout<<"Ingrese el numero de  una de las sigueintes opciones "<<endl;
		cout<<" "<<endl;
		cout<<"1. Facturar "<<endl;
		cout<<"2. Libro Diario "<<endl;
		cout<<"3. Agregar Producto"<<endl;
		cout<<"4. Salir del Programa"<<endl;
		cout<<" "<<endl;
		cin>>a;
// Inicia la sentencia de casos segun la opcion que se eleja por el usuario.
		switch(a){
		
			// caso 1 la facturacion y ejecucion de las facturas 
			case 1: 
			// parte del codigo que crea el archivo txt de las facturas para su posterior revision en libro diario
			archivo.open("facturas.txt",ios::out);
			if (archivo.fail()){
							cout<<"fALLIDO"<<endl;
							exit(1);
						}
			// ciclo de repeticiones dependiendo de cuantos datos desea procesar el cajero
			
		cout<<"Ingrese el numero de datos a ingresar"<<endl;
						cin>>g;
						for( i=0; i<g;i++){
						
			cout<<"Ingrese la Opcion valida; "<<endl;
			// inicio de facturacion e ingreso de datos
			archivo<<"Inicio de Factura"<<endl;



						cout<<"Ingrese los datos de la factura a medida que se le piden: "<<endl;
						
			            cout<<" "<<endl;
			            
			            cout<<"Ingrese el dia:"<<endl;
			            cin>>dia;
			            cout<<"Ingrese el mes:"<<endl;
			            cin>>mes;
			            cout<<"Ingrese el anio:"<<endl;
			            cin>>anio;
			            cout<<"Ingrese el nombre del cliente: "<<endl;
			            cin>>cliente;
			            cout<<"Ingrese el nombre del producto:"<<endl;
			            cin>>producto;
			            cout<<"Ingrese precio: "<<endl;
			            cin>>precio;
			            
			            cout<<"Ingrese la cantidad: "<<endl;
			            cin>>cantidad;
			            cout<<"el cliente es de la tecera edad?"<<endl;
			            cout<<"1. si    2. no "<<endl;
			            cin>>e;
			            cout<<" "<<endl;
			          
					  //calculo de la parte matematica
					     
			            cod=cod+504;
			            subtotal=cantidad*precio;
			            impuesto=subtotal*0.15;
			            // decision si el cliente es de la tercera edad o no para verificar si necesita un descuento
			            if(e>=60){
			            	
			            descuento=subtotal-0.05;
			            total=subtotal-descuento+impuesto;
			            }
			            else{
						descuento=0;
						total=subtotal+impuesto;
						
						}
						
						//Impresion de los resultados de la factura en pamtalla y llenado en el archivo de texto

			            cout<<"la fecha es "<<dia<<"/"<< mes<<"/"<< anio<<endl;
			            archivo<<"la fecha es "<<dia<<"/"<< mes<<"/"<< anio<<endl;
			            cout<<"Codigo de la Factura emitida: "<<cod<<endl;
			            archivo<<"Codigo de la Factura emitida: "<<cod<<endl;
			            cout<<"Nombre del Cliente: "<<cliente<<endl;
			            archivo<<"Nombre del Cliente: "<<cliente<<endl;
			            cout<<"tipo de producto: "<<producto<<endl;
			            archivo<<"tipo de producto: "<<producto<<endl;
			            cout<<"Cantidad de Unidades: "<<cantidad<<endl;
			            archivo<<"Cantidad de Unidades: "<<cantidad<<endl;
			            cout<<"El Sub total es: "<<subtotal<<endl;
			            archivo<<"El Sub total es: "<<subtotal<<endl;
			            cout<<"El impuesto es: "<<impuesto<<endl;
			            archivo<<"El impuesto es: "<<impuesto<<endl;
			            cout<<"El descuento es ( aplica si es de la tercera Edad): "<<descuento<<endl;
			            archivo<<"El descuento es ( aplica si es de la tercera Edad): "<<descuento<<endl;
			            cout<<"Total a pagar en Lempiras: "<<total<<endl;
			            archivo<<"Total a pagar en Lempiras: "<<total<<endl;
			            cout<<" "<<endl;
			            archivo<<" "<<endl;
			            
			        
	                   }
			            // cierre del archivo de texto al terminar el clico de facturas 
						archivo.close();
						
						// hace una pausa en pantalla antes de arrojar un resultado o proceso
			            system("pause");
			            
			            // regresa y muestra el menu principal para seleccionar que desea hacer el usuario.
			            return main();
			            
			    break; // aqui termina el caso 
			 
			case 2: // aqui comienza el caso 2
				
				cout<<" "<<endl;
				// parte del codigo que lee el archivo de texto si es que existe y si no se ha creado aun arroja un fallo
				archivo1.open("facturas.txt",ios::in);
						
						if (archivo1.fail()){
							cout<<"fALLIDO"<<endl;
							exit(1);
						}
						while(!archivo1.eof()){
							getline(archivo1,texto);
							// aqui es donde muestra la parte de texto que se ha llenado en la parte de facturacion y se muestra en 
							//pantalla
							cout<<texto<<endl;
							
						}
						// aqui se cierra el archivo de lectura 
						archivo1.close();
				
				
				
				
				break;// aqui termina el caso 2
			
			case 3:// aqui comienza el caso 3 menu de llenado de inventario
				cout<<"Seleccione la opcion correspondiente: "<<endl;
				cout<<"1. Agregar embutidos."<<endl;
				cout<<"2. Agregar limpieza."<<endl;
				cout<<"3. Agregar liquido."<<endl;
				cout<<"4. Agregar granos."<<endl;
				cout<<"5. Agregar frutas y verduras."<<endl;
				
				// se lee la opcion correcta para ver que caso se ejecuta
				cin>>f;
				// comienza la sentencia de casos
				switch(f){
					// inicio de caso numero 1 
					case 1:
						// creacion de archivo de texto para escritura
						archivo.open("embutidos.txt",ios::out);
						
						if (archivo.fail()){
							cout<<"fALLIDO"<<endl;
							exit(1);
						}
						// clico de repeticion dependiendo de la cantidad de productos a ingresar
						cout<<"Ingrese el numero de datos a ingresar"<<endl;
						cin>>g;
						for( i=0; i<g;i++){
						// llenado de productos y llenado del archivo de texto 
						cout<<"Ingrese los datos en el orden correspondiente"<<endl;
						cout<<"Lugar de procedencia"<<endl;
						cin>>procedencia;
						archivo<<"Lugar Porcedencia: "<<procedencia<<endl;
						cout<<"Cantidad Inventario"<<endl;
						cin>>canti;
						archivo<<"Cantidad Inventario: "<<canti<<endl;				
						cout<<"Tipo de producto"<<endl;
						cin>>tipo;
						archivo<<"Tipo de Producto: "<<tipo<<endl;
						cout<<"Precio del producto"<<endl;
						cin>>valor;
						archivo<<"Precio del Porducto:"<<valor<<endl;
						
						
					   }
					   // cierre del archivo de texto de escritura
					   archivo.close();
						break;
						
					case 2:
						// creacion del archivo de texto de liquidos
						
						archivo2.open("liquido.txt",ios::out);
						
						if (archivo2.fail()){
							cout<<"fALLIDO"<<endl;
							exit(1);
						}
						// ciclo de repeticiones dependiendo de la cantidad de productos a Ingresar
						
                        cout<<"Ingrese el numero de datos a ingresar"<<endl;
						cin>>g;
						for( i=0; i<g;i++){
							
					// llendo de productos en pantalla y llenado del archivo de texto
						cout<<"Ingrese los datos en el orden correspondiente"<<endl;
						cout<<"tipo de liquido"<<endl;
						cin>>procedencia;
						archivo2<<"Procedencia:"<<procedencia<<endl;
						cout<<"Marca"<<endl;
						cin>>marca;
						archivo2<<"Marca:"<<marca<<endl;				
						cout<<"Codigo"<<endl;
						cin>>tipo;
						archivo2<<"Codigo:"<<tipo<<endl;
						cout<<"Precio del producto"<<endl;
						cin>>valor;
						archivo2<<"Precio del Producto"<<valor<<endl;
						cout<<"Cantidad de producto:"<<endl;
						cin>>pr;
						archivo2<<"Cantidad del producto: "<<pr<<endl;
						cout<<"Proveedor producto:"<<endl;
						cin>>proveedor;
						archivo2<<"Proveedor del producto:"<<proveedor<<endl;
						cout<<"Nombre del producto:"<<endl;
						cin>>nproducto;
						archivo2<<"Nombre del Producto: "<<nproducto<<endl;
						
					   }
					   // cierre de archivo de texto con los datos ingresados
						archivo2.close();
						// muestra nuevamente el menu principal
					   return main();
						
						break;// cierre de caso 2
					case 3:
						// creacion del archivo de texto limpieza
						archivo3.open("limpieza.txt",ios::out);
						
						if (archivo3.fail()){
							cout<<"fALLIDO"<<endl;
							exit(1);
						}
						// cliclo de repeticiones dependiendo de la cantidad de producto a Ingresar
                        cout<<"Ingrese el numero de datos a ingresar"<<endl;
						cin>>g;
						for( i=0; i<g;i++)
						{
						// llenado de productos en pantalla y llenado en el archivo de texto
						cout<<"Ingrese los datos en el orden correspondiente"<<endl;
						cout<<"tipo de liquido"<<endl;
						cin>>procedencia;
						archivo3<<"Tipo de liquido: "<<procedencia<<endl;
						cout<<"Marca"<<endl;
						cin>>marca;
						archivo3<<"Marca: "<<marca<<endl;				
						cout<<"Codigo"<<endl;
						cin>>tipo;
						archivo3<<"Codigo: "<<tipo<<endl;
						cout<<"Precio del producto"<<endl;
						cin>>valor;
						archivo3<<"valor del Producto"<<valor<<endl;
						cout<<"Cantidad de producto:"<<endl;
						cin>>pr;
						archivo3<<"Cantida de Producto: "<<pr<<endl;
						cout<<"Proveedor producto:"<<endl;
						cin>>proveedor;
						archivo3<<"Proveedor de producto: "<<proveedor<<endl;
						cout<<"Nombre del producto:"<<endl;
						cin>>nproducto;
						archivo3<<"Nombre del Producto: "<<nproducto<<endl;
						
					    }
					    // cierre del archivo de texto con los productos ingresados
						archivo3.close();
						// regresa y muestra el menu principal
					   return main();
						break;// cierre del caso 3
					case 4:
						// creacion del archivo de texto grano
						archivo4.open("grano.txt",ios::out);
						
						if (archivo4.fail()){
							cout<<"fALLIDO"<<endl;
							exit(1);
						}
						// ciclo de repeticion dependiendo de la cantidad de valores a ingresar
						cout<<"Ingrese el numero de datos a ingresar"<<endl;
						cin>>g;
						for( i=0; i<g;i++){
						// llenado de los productos en pantalla y en el archivo de texto creado
						
						cout<<"Ingrese los datos en el orden correspondiente"<<endl;
						cout<<"tipo de grano"<<endl;
						cin>>procedencia;
						archivo4<<"Tipo de Grano: "<<procedencia<<endl;			
						cout<<"Cantidad de quintales"<<endl;
						cin>>tipo;
						archivo4<<"Cantidad de quintales: "<<tipo<<endl;
						cout<<"Precio del producto"<<endl;
						cin>>valor;
						archivo4<<"Precio del Producto"<<valor<<endl;
						cout<<"Cantidad de producto:"<<endl;
						cin>>pr;
						archivo4<<"Cantidad de Producto:"<<pr<<endl;
						cout<<"Unidad de medida:"<<endl;
						cin>>proveedor;
						archivo4<<"Ubidad de Medida: "<<proveedor<<endl;
						cout<<"Lugar de procedencia:"<<endl;
						cin>>nproducto;
						archivo4<<"Lugar de Procedencia: "<<nproducto<<endl;
						
					}
					
					// cierre del archivo de texto con los valores ingresados
						archivo4.close();
						
						// vuelve a mostrar los valores del menu principal
					   return main();
						
					    break;// cierre de caso 4
					case 5:
						
						// creacion del acrhivo frutas verduras
						archivo5.open("frutasverduras.txt",ios::out);
						
						if (archivo5.fail()){
							cout<<"fALLIDO"<<endl;
							exit(1);
						}
						
						//cliclo de repeticion dependiendo de la cantidad de productos a ingresar
						cout<<"Ingrese el numero de datos a ingresar"<<endl;
						cin>>g;
						for( i=0; i<g;i++){
						
						// llenado de los produtos en pantalla y en el archivo de texto
						cout<<"Ingrese los datos en el orden correspondiente"<<endl;
						cout<<"tipo/  Fruta o verdura"<<endl;
						cin>>procedencia;
						archivo5<<"Fruta o Verdura: "<<procedencia<<endl;
						cout<<"categoria"<<endl;
						cin>>marca;
						archivo5<<"Categoria: "<<marca<<endl;				
						cout<<"Precio"<<endl;
						cin>>tipo;
						archivo5<<"precio: "<<tipo<<endl;
						cout<<"Cantidad a inventario: "<<endl;
						cin>>valor;
						archivo5<<"Cantida a Inventario:" <<valor<<endl;
					}
						// cierre del archivo de texto con los valores ya ingresados
						archivo5.close();
						
					   // muestra el menu principal nuevamente
						return main();
						
						break;// cierra el caso 5
						
					default:// opcion por defecto si el usuario ingresa un numero que no aparece en el menu
						cout<<"Ingrese un valor dentor de los parametros."<<endl;
						
						break;// cierre del caso por defecto
						
					
				}
				break;// cierre del caso 3 de llenado de Inventario
			
			case 4:
				// menu de cierre del programa
				cout<<"segur@ que deseas Salir del Programa "<<endl;
				cout<<"1. si"<<endl;
				cout<<"2. no"<<endl;
				cin>>b;
				// decision del cierre si desea salir cierra/ pero si no desea salir vuelve a mostrar el menu principal
				if(b==1){
					return 0;
				} else{
					return main();
				}
				
				break;// cierre del caso 4
				
			default:// opcion por defecto si el usuario ingresa un numero que no esta en el menu principal del main
				cout<<"Opcion Invalida Ingrese un Valor Valido"<<endl;
			//pausa del sistema antes de proceder a otra tarea
				system ("pause");
				// muestra el menu principal
				return main();
				break;// cierre del caso por defecto
		}
	}
	
	while(a!=4);// finalizacion del cliclo do while
	system ("pause");// pausa del sistema antes de cerrar el programa
	

}


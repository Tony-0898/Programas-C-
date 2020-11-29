
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[4][4];
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	
	cout<<"\nMatriz Normal\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<numeros[i][j]<<" ";
		}
		cout<<"\n";
	}
		cout<<"\nSuma de matrices\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<numeros[i][j]+numeros[i][j]<<" ";
		}
		cout<<"\n";
	}
		cout<<"\nResta de matrices\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<numeros[i][j]-numeros[j][i]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nMatriz Transpuesta\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<numeros[j][i]<<" ";
		}
		cout<<"\n";
	}
	
		cout<<"\nMatriz opuesta\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<-numeros[i][j]<<" ";
		}
		cout<<"\n";
	}

	
	getch();
	return 0;
}


#include<iostream>
#include<conio.h>

using namespace std;

int escribeNumeros(int,int);

int main(){
	int ini,fin;
	
	cout.precision(2);
	cout<<"				MOSTRANDO NUMEROS EN UN INTERVALO"<<endl;
	cout<<"													ETN - 307L"<<endl<<endl;
	cout<<" Este programa mostrara numeros en un intervalo que les demos por recursividad."<<endl<<endl;
	cout<<"\n	Escriba el comienzo de la muestra = ";
	cin>>ini; 
	cout<<"\n	Escriba el fin de la misma : "; 
	cin>>fin;
	
	cout<<"\n\n"; 
	for(int i=ini;i<=fin;i++){
		cout<<"		"<<escribeNumeros(i,fin)<<"	";
	}	
	
	getch();
	return 0;
} 

int escribeNumeros(int ini,int fin){
	if(ini==fin){
		return ini;
	}
	else{
		return escribeNumeros(ini,fin-1);
	}
}

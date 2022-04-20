#include<iostream>
#include<conio.h>
using namespace std;

int potencia(int,int);

int main(){
	int base,exponente;
	
	cout.precision(2);
	cout<<"				ELEVACION DE UN NUMERO A UN EXPONENTE RECURSIVO"<<endl;
	cout<<"													ETN - 307L"<<endl<<endl;
	cout<<" Este programa elevara un numero a un 'n' exponente por recursividad."<<endl<<endl;
	cout<<"\n	Digite numero base: ";
	cin>>base;
	cout<<"\n	Digite exponente: ";
	cin>>exponente;
	
	cout<<"\n	Resultado: "<<potencia(base,exponente)<<endl;	
	
	getch();
	return 0;
}

int potencia(int x,int y){
	int pot;
	if(y==1){
		pot = x;
	}
	else{
		pot = x*potencia(x,y-1);
	}
	return pot;
}

#include<iostream>
#include<conio.h>

using namespace std;

int fibonacci(int n);

int main(){
	int nElementos;
	cout.precision(2);
	cout<<"\n						SERIE DE FIBONACCI"<<endl;
	cout<<"													ETN - 307L"<<endl<<endl;
	cout<<" Este programa mostrara la serie de fibonacci para un determinado numero por recursividad."<<endl<<endl;
	do{
		cout<<"\n	Digite el numero de elementos: ";
		cin>>nElementos;
	}while(nElementos <= 0);
	
	cout<<"\n	Serie Fibonacci: ";
	for(int i=0;i<nElementos;i++){
		cout<<fibonacci(i)<<"	, ";	
	}
	
	getch();
	return 0;
}

int fibonacci(int n){
	if(n<2){
		return n;
	}
	else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}

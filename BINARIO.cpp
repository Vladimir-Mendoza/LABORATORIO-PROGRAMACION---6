#include<iostream>
#include<cstdlib>
using namespace std;

int binario(int n){
    if(n>1)      binario(n/2);
    cout<<n%2;
}
int main( void ){
    int nro;
   	cout.precision(2);
	cout<<"\n						CONVERSOR DE NUMEROS"<<endl;
	cout<<"													ETN - 307L"<<endl<<endl;
	cout<<" Este programa convierte un numero decimal a binario por recursividad."<<endl<<endl;
    do{
            cout<<" Ingrese el numero: ";
            cin>>nro;
            if(nro<0) cout<<"\nINGRESE UN NUMERO ENTERO Y POSITIVO... \n";
    }while(nro<0);
    cout<<endl;
    cout<<"\n Numero:"<<nro<<endl;
    cout<<"\n Binario:";
    binario(nro);

    return 0;
}

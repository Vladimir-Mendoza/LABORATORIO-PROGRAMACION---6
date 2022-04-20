#include<iostream>
#include<cstdlib>
using namespace std;

void invertir(int nro){
    cout<<nro%10;
    if (nro>10) invertir(nro/10);

}
int main( void ){
    int nro;
   	cout.precision(2);
	cout<<"\n						INVERSOR DE NUMEROS"<<endl;
	cout<<"													ETN - 307L"<<endl<<endl;
	cout<<" Este programa invierte un numero por recursividad."<<endl<<endl;
    do{
            cout<<" Numero a invertir: ";
            cin>>nro;
            if(nro<0) cout<<"\nINGRESE UN NUMERO ENTERO Y POSITIVO... \n";
    }while(nro<0);
    cout<<"\n Numero:   "<<nro<<endl;
    cout<<"\n Numero Invertido:  ";
    invertir(nro);
    cout<<endl<<endl;
    return 0;
}

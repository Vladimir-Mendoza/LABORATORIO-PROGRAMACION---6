#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

void permutacionCR(string aux,string *items,int n,int r){
	string resp=aux;
	if(r>0){
		for(int x=0; x<n; x++){
			permutacionCR(aux+items[x], items,n,r-1);
		}
	}else{
		cout <<"\n "<<resp;
	}
}
int main(){
	string items[]={"a","b","c","d","e","f","g","h","i","j"};
	int n,r;
	cout.precision(2);
	cout<<"\n							PERMUTACIONES"<<endl;
	cout<<"													ETN - 307L"<<endl<<endl;
	cout<<" Una permutacion es la variacion del orden o posicion de los elementos de un conjunto ordenado o una tupla."<<endl<<endl;
	cout <<"\n X: ";
	cin >>n;
	cout <<"\n R: ";
	cin >>r;
	cout <<"\n Lista de elementos:\n ";
	for(int x=0; x<n; x++){
		cout <<items[x]<<",";
	}
	
	cout <<"\n\n Numero de permutaciones con repeticion: "<<pow(n,r);
	cout <<"\n\n Lista de permutaciones con repeticion:\n ";
	
	permutacionCR("",items,n,r);
	
	return 0;
}

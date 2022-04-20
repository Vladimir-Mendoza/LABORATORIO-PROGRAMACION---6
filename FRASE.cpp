#include<iostream>

using namespace std;

void escribir(string frase, int n);

int main(){
    string f;
    int n=10;
    cout.precision(2);
	cout<<"\n						REPETICION DE UNA FRASE"<<endl;
	cout<<"													ETN - 307L"<<endl<<endl;
	cout<<" Este programa repetira una frase por recursividad."<<endl<<endl;
    cout << "\n	Escribe una frase. Se repetira 10 veces." << endl;
    getline(cin, f);
    cout << endl;
    escribir(f,n);
}

void escribir(string frase, int n){
    cout << n << "	 : " << frase << endl;
    n--;
    if (n>0) escribir(frase,n);
}

#include<iostream>
#define SIN_TIPO string

using namespace std;

float sum(float n);

int main() {
	float n;
	cout.precision(2);
	cout<<"\n						SUMA POR RECURSIVIDAD"<<endl;
	cout<<"													ETN - 307L"<<endl<<endl;
	cout<<" Este programa mostrara la suma de cifras por recursividad."<<endl<<endl;
	cout << " Ingrese cantidad de enteros a sumar" << endl;
	cin >> n;
	cout << " La suma de los " << n << " primeros numeros enteros es de " << sum(n) << endl;
	return 0;
}

float sum(float n) {
	float val;
	if (n==0 || n==1) {
		val = n;
	} else {
		val = sum(n-1)+n;
	}
	return val;
}


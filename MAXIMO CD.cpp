#include <iostream>

using namespace std;

int MCD (int a, int b){
	if(a == 0){
		return b;
	}
	return MCD (b%a, a);
}
int main(){
	
	cout.precision(2);
	cout<<"\n						MAXIMO COMUN DIVISOR"<<endl;
	cout<<"													ETN - 307L"<<endl<<endl;
	cout<<" Este programa calculara el MCD de dos numeros por recursividad."<<endl<<endl;
	int a, b;
	cout <<"	Primera cifra ";
	cin >> a;
	cout <<"\n	Segunda cifra ";
	cin >> b;
	cout << "\n\n					El maximo comun divisor es "<<MCD(a, b);
	
	return 0;
}

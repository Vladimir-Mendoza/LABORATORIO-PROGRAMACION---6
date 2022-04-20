#include<iostream>

using namespace std;

void comprobar(char r);

int main(){
    char c;
    cout.precision(2);
	cout<<"\n						PULSAR UNA TECLA"<<endl;
	cout<<"													ETN - 307L"<<endl<<endl;
	cout<<" Este programa mostrara si lo que se digito es un numero o no por recursividad."<<endl<<endl;
    cout << "\n Pulsa un numero : ";
    cin >> c;
    comprobar(c);
    cout << "\n Programa terminado." << endl;
}

void comprobar(char r){
     int n=int(r);
     if (n>=48 and n<=57) {
        cout << "\n Correcto, la tecla pulsada es un numero." << endl;
     }
     else {
        cout << "\n Incorrecto, la tecla pulsada NO es un numero." << endl;
        cout << "\n Vuelve a pulsar un numero : ";
        cin >>r;
        comprobar(r);
     }
}

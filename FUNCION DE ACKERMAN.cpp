#include <iostream>
#include <cstdlib>

using namespace std;

int Ackerman(int m, int n)
{
    if(m==0)
      return n+1;
    else
    {
        if(n==0)
           return Ackerman(m-1, 1);
        else
           return Ackerman(m-1, Ackerman(m, n-1));
    }
}
int main()
{
    int m, n, num ;

    cout.precision(2);
	cout<<"\n						FUNCION DE ACKERMAN"<<endl;
	cout<<"													ETN - 307L"<<endl<<endl;
	cout<<" En teor�a de la computaci�n, una funci�n de Ackermann es una funci�n matem�tica recursiva."<<endl;
	cout<<" Encontrada en 1926 por Wilhelm Ackermann."<<endl<<endl;
    cout<<"	Ingrese m: ";
    cin>> m ;
    cout<<"\n	Ingrese n: ";
    cin>> n ;
    
    num = Ackerman(m,n);
    
    cout<<"\n\n		El numero es: "<< num <<endl<<endl;

    system("pause");
    
    return 0;
}

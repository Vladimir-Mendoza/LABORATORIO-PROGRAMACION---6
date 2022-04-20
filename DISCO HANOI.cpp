#include <iostream>

using namespace std;

int DiscosHanoi(int elementos, char a, char b,char c)
{
	static int movimientos = 0;
	if (elementos > 0)
	{
		DiscosHanoi(elementos -1, a, b, c);
		std::cout << "\n\n	Se movio el disco " << elementos << "de la barra " << a << " hasta la " << c << std::endl;;
		movimientos++;
		DiscosHanoi( elementos -1, b, a, c);
	}
	return movimientos;
}

int main(void)
{
	int elementos, movimientos;
	
	cout.precision(2);
	cout<<"						DISCO HANOI"<<endl;
	cout<<"													ETN - 307L"<<endl<<endl;
	cout<<" Las Torres de Hanoi es un rompecabezas o juego matematico inventado en 1883 por el matematico frances Edouard Lucas"<<endl;
	cout<<" Este juego de mesa individual consiste en un numero de discos perforados de radio creciente que se apilan,"<<endl; 
	cout<<" insertandose en uno de los tres postes fijados a un tablero."<<endl<<endl;
	std::cout <<"\n\n	Numero de discos = ";
	std::cin >> elementos;
	
	movimientos - DiscosHanoi(elementos, 'A', 'B', 'C');
	
}

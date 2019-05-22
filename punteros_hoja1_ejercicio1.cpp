#include<iostream>
#include<conio.h>
using namespace std;
void  DibujaCuadrado() {
	int x, y, m, n;

	cout << "ingrese las coordenadas x-y: " << endl;
	cin >> x >> y;
	cout << "ingrese  los lados del cuadrado: " << endl;
	cin >> n >> m;

	for (int i = 0; i < y; i++)
	{
		cout << endl;
	}
	for (int i = 0; i < n; i++)//n=ancho del cuadrilatero
	{
		for (int i = 0; i < x; i++) {
			cout << " ";
		}
		for (int i = 0; z < m; z++)//m=largo del cuadrilatero
		{
			cout << "*";
		}
		cout << endl;
	}



}

int main() {

	DibujaCuadrado();
	


	_getch();
	return 0;
}
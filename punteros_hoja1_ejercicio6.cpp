#include<iostream>
#include<conio.h>
using namespace std;

double CovertirSoles(double n1, double n2) {

	
	
	return  n1*n2 ;
}
double CovertirDolares(double n1, double n2) {

	
	return n1*n2 ;
}



int main() {
	int a;
	double  b, x=3.33, y=3.5;
	double CambioTotal;

	
	do {

		cout << "Desea 1:Dolares 2:Soles 3:Salir  - ";
		cin >> a;
	} while (a != 3 && a!=1 && a != 2);
	


	switch (a)
	{
	case 1:
		cout << " ingrese la cantidad que desea cambiar: " << endl;
		cin >> b;

		CambioTotal = CovertirSoles(x, b);
		cout << "Cantidad Total En Soles Es: " << CambioTotal << endl;
		cout << "Cantidad Total En Soles Es: " << CovertirSoles(x, b) << endl;
		break;

	case 2:
		cout << " ingrese la cantidad que desea cambiar: " << endl;
		cin >> b;


		CambioTotal = CovertirSoles(y, b);
		cout << "Cantidad Total En Dolares Es: " <<CambioTotal << endl;
		cout << "Cantidad Total En Dolares Es: " << CovertirDolares(y, b) << endl;
		break;

	case 3:
		break;
	}


	 
		
	_getch();
	return 0 ;
}
#include<iostream>
#include<conio.h>
using namespace std;
void EsBisiesto() {

	int a;
	do {

		cout << "Ingrese el a�o: ";
		cin >> a;

	} while (a <= 0);


	if (a % 400 == 0) {
		cout << a << " Es un a�o biciesto " << endl;
	}
	else if (a % 100 != 0 && a % 4 == 0)
		cout << a << " Es un a�o biciesto " << endl;
	else {

		cout << a << " No es un a�o biciesto " << endl;

	}


}



int main() {

	EsBisiesto();
	

	_getch();
	return 0;
 }
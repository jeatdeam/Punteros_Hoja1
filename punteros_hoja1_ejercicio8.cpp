#include<iostream>
#include<conio.h>
using namespace std;
void EsBisiesto() {

	int a;
	do {

		cout << "Ingrese el año: ";
		cin >> a;

	} while (a <= 0);


	if (a % 400 == 0) {
		cout << a << " Es un año biciesto " << endl;
	}
	else if (a % 100 != 0 && a % 4 == 0)
		cout << a << " Es un año biciesto " << endl;
	else {

		cout << a << " No es un año biciesto " << endl;

	}


}



int main() {

	EsBisiesto();
	

	_getch();
	return 0;
 }
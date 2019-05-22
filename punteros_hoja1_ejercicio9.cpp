#include<iostream>
#include<conio.h>
using namespace std;
bool FechaEsValida(int dia, int mes, int annio) {

	bool xd;

	if (annio % 400 == 0) {
		cout << annio << " Es un año biciesto " << endl;
	}
	else if (annio % 100 != 0 && annio % 4 == 0)
		cout << annio << " Es un año biciesto " << endl;
	else {

		cout << annio << " No es un año biciesto " << endl;

	}

	switch (mes) {
	case 1:
		cout << "enero"<<endl;
		break;
	case 2:
		if (annio % 400 == 0) {
			
			if (dia > 29) {
				cout << "(febrero solo tiene 29 dias)";
				xd = false;
			}
			else {
				cout << "febrero" << endl;
				xd = true;
			}
		}
		else if (annio % 100 != 0 && annio % 4 == 0) {

			if (dia > 29) {
				cout << "(febrero solo tiene 29 dias)";
				xd = false;
			}
			else {
				cout << "febrero" << endl;
				xd = true;
			}
		}
		else if (dia > 28) {
			cout << "(febrero solo tiene 28 dias)";
			xd = false;
		}
		else {
			cout << "febrero" << endl;
			xd = true;
		}
		break;
	case 3:
		cout << "marzo" << endl;
		xd = true;
		break;
	case 4:
		if (dia > 30) {

			cout << "(abril solo tiene 30 dias)" << endl;
			xd = false;
		}
		else {
			cout << "abril" << endl;
			xd = true;
		}
		break;
	case 5:
		cout << "mayo" << endl;
		xd = true;
		break;
	case 6:
		if (dia > 30) {

			cout << "(junio solo tiene 30 dias)" << endl;
			xd = false;
		}
		else {
			cout << "junio" << endl;
			xd = true;
		}
		break;
	case 7:
		cout << "julio" << endl;
		xd = true;
		break;
	case 8:
		cout << "agosto" << endl;
		xd = true;
		break;
	case 9:
		if (dia > 30) {

			cout << "(setiembre solo tiene 30 dias)" << endl;
			xd = false;
		}
		else {
			cout << "setiembre" << endl;
			xd = true;
		}
		break;
	case 10:
		cout << "octubre" << endl;
		xd = true;
		break;
	case 11:
		if (dia > 30) {

			cout << "(noviembre solo tiene 30 dias)" << endl;
			xd = false;
		}
		else {
			cout << "noviembre" << endl;
			xd = true;
		}
		break;
	case 12:
		cout << "diciembre" << endl;
		xd = true;
		break;

	}

	if (xd == true) {
		cout << "La fecha es correcta: " << dia << " " << mes << " " << annio << endl;
	}
	else if (xd == false) {
		cout << "La fecha no es correcta: " << dia << " " << mes << " " << annio << endl;

	}

	return xd;
}



int main() {
	int a, b, c;
	

	do {

		cout << "ingrese el dia: ";
		cin >> a;

	} while (a <= 0 || a >= 32);

	do {

		cout << "ingrese el mes: ";
		cin >> b;

	} while (b<= 0 || b >= 13);

	do {

		cout << "ingrese el año: ";
		cin >> c;

	} while (c <= 0);

	
	FechaEsValida(a, b, c);
	

	_getch();
	return 0;
}

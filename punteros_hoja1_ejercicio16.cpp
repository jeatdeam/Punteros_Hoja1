#include<iostream>
#include<conio.h>
using namespace std;


int Factorial(int d) {
	int Factorial=0;
	for (int i=1; i <=d ; i++) {

		Factorial = Factorial * i;

		return Factorial;

	}
}

float Combinatorio(int a) {
	float Combinatorio = 0;

	for (int i=1; i <= a; i++) {

		Combinatorio = 2 * i + (1+a/10);

		return Combinatorio;

	}
}

float Combinatorio2(int n) {
	float Combinatorio2 = 0;

	float a2, b2;

	a2 = (Combinatorio(n) * 10) % 10;
	b2 = Combinatorio - a2;
	
	for (int i=1; i <= n ; i++) {

		Combinatorio2 = Combinatorio2 + (Factorial(a2) / (Factorial(a2)*Factorial(a2 - b2))) / Factorial(n);

		float Combinatorio2;
	}
}

int main() {

int n;
	do {
		cout << "Ingrese el valor de N: ";
		cin >> n;

	} while (n < 0);

	Combinatorio(n);



cout << "La suma de la sucesión es: "<<Combinatorio2(n) << endl;


	_getch();
	return 0;
		}

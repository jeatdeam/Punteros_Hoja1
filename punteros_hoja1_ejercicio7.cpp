#include<iostream>
#include<conio.h>
using namespace std;
void Invertir(int *Na) {
	int num, resto, numInv = 0;

	while (*Na > 0) {

		resto = *Na % 10;
		*Na = *Na / 10;
		numInv = numInv * 10 + resto;
	}


	cout << "el numero invertido es: " << numInv << endl;


}




int main() {
	int a;

	do {
		cout << "ingrese un numero: ";
		cin >> a;
	} while (a<=9999);

	int *Pa;

	Pa = &a;

	Invertir(Pa);




	_getch();
	return 0;
}
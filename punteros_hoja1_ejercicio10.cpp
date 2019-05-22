#include<iostream>
#include<conio.h>
using namespace std;
void Circulo(int a) {


	float pi = 3.1416;

	cout << "el area es: " << a * pi << endl;

}


int main() {

	
	int radio;
	cout << "ingrese el radio de la cirfunferencia: ";
	cin >> radio;

	Circulo (radio);




	_getch();
	return 0;
}

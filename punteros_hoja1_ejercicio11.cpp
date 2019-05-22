#include<iostream>
#include<conio.h>
using namespace std;

float Circulo(int a) {
	
	float pi = 3.1416;

return a*pi;
}

	
int main() {

	
	int radio;
	cout << "ingrese el radio de la cirfunferencia: ";
	cin >> radio;

	
	
    Circulo(radio);



 	
 	_getch();
 	return 0;
 }

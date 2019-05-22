#include<iostream>
#include<conio.h>
using namespace std;
float Area(int n1){
	float pi=3.1416;
	
	
	return pi*n1*n1;
}

float Perimetro(int m1){
	
	float pi=3.1416;
	
	
	return 2*pi*m1;
}
	
int main() {

	int a;
	cout<<"ingrese el radio : ";
	cin>>a;
	
    Area(a);
    Perimetro(a);

 	
 	_getch();
 	return 0;
 }

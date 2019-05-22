#include<iostream>
#include<conio.h>
 using namespace std;
 void AreaPerimetro(float radio){
 	
 	float area,perimetro,pi=3.1416;
 	
 	float *a2,*p2;
 	
 	a2=&area;
 	p2=&perimetro;
 	
 	area= pi*radio*radio;
 	perimetro=2*pi*radio;
 	
 	cout<<"El area es: "<<*a2<<endl;
 	cout<<"El perimetro es: "<<*p2<<endl;
 	
 	
 	
 }
 
 
 
 int main(){
 	
 	int a;
 	cout<<"ingrese el radio: ";
 	cin>>a;
 	
 	AreaPerimetro(a);
 	
 	
 	
 	
 	
 	
 	_getch();
 	return 0;
 }

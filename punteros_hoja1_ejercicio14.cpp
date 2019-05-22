#include<iostream>
#include<conio.h>
using namespace std;

void Intercambiar(int *n1,int *n2){
	
	int newpuntx,newpunty;
		
newpuntx=*n1;
newpunty=*n2;
	cout<<"El valor de x es: "<<*n1<<endl;
	cout<<"El valor de y es: "<<*n2<<endl;
	

	*n1=newpunty;
	*n2=newpuntx;
	


}



int main(){
	
	int a,b;
	cout<<"ingrese x-y: "<<endl;
	cin>>a>>b;
	
	cout<<a<<" "<<b<<endl;
	
	int *a1,*b1;
	
	a1=&a;
	b1=&b;
	
	Intercambiar(a1,b1);
	
	

	
	_getch();
	return 0;
}

#include<iostream>
#include<conio.h>
using namespace std;
int Combinatorio(int n1){
	
	
	if(n1==0)
	n1=1;
	else{
		n1=n1*Combinatorio(n1-1);
	}
	
	return n1;
}
int Combinatorio2(int n2){

	if(n2==0)
	n2=1;
	else {
		n2=n2*Combinatorio(n2-1);
	}
      return n2;	
     }
int Combinatorio3(int n3){

     if(n3==0)
     n3=1;
     else{
	
	n3=n3*(n3-1);
}
return n3;
}


int main(){
	
	int a,b,n;
	cout<<"Ingrese los 2 elementos:  ";
	cin>>a>>b;
	n=a-b;
	
	cout<<"Combinatorio de C("<<a<<","<<b<<")="<<Combinatorio(a)/(Combinatorio(b)*Combinatorio(n));
	
	
	
	
	
	
	
	_getch();
	return 0;
}

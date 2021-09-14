//Escribe un programa que resuelva la formula general x=-b+-(sqrt(pow(b,2))-4(a)(c)/2(a)
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float a, b, c, resultado1=0, resultado2=0;
	cout<<"digite el valor de a: ";cin>>a;
	cout<<"digite el valor de b: ";cin>>b;
	cout<<"digite el valor de c: ";cin>>c;
	
	resultado1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	resultado1=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	
	cout<<"\nEl resultado positivo es: "<<resultado1<<endl;
	
	cout<<"\nEl resultado negativo es: "<<resultado2<<endl;
	
	return 0;
}

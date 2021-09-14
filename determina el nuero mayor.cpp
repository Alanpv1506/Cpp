//Escribe un programa que lea dos numeros y determine cual de ellos es el mayor
#include<iostream>
using namespace std;
int main(){
	int a, b;
	cout<<"Digita el valor de a: ";cin>>a;
	cout<<"Digita el valor de b: ";cin>>b;
	if(a==b){
		cout<<"Ambos numeros son iguales";
	}
	else if(a>b){
		cout<<"El mayor es: "<<a;
	}
	else{
		cout<<"El mayor es: "<<b;
	}
	
	
	return 0;
}

/*Escribe un programa que lea de la entrada estandar 
los dos catetos de un triangulo rectangulo y muestre en la salida estandar su hipotenusa*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float a, b, c;
	cout<<"Digita el valor del cateto opuesto: ";cin>>a;
	cout<<"Digita el valor del cateto adyacente: ";cin>>b;
	c=sqrt(pow(a,2)+pow(b,2));
	
	cout<<"\nEl valor de la hipotenusa es: "<<c<<endl;
	
	
	
	return 0;
}

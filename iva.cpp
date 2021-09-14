/*Escribe un programa que lea de la entrada estandar 
el precio de un producto y muestre en la salida el precio de el producto mas el iva.*/

#include<iostream>
using namespace std;
int main (){
	float producto, precio_final, iva;
	cout<<"Digite el precio: ";
	cin>>producto;
	iva=producto*.16;
	precio_final=producto+iva;
	cout<<"El precio con iva es: "<<precio_final;
	
	
	return 0;
}

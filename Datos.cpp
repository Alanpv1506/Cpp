/*Hacer u programa que muestre en pantalla los datos de una persona Edad, sexo, estatura*/

#include<iostream>
using namespace std;
int main(){
	int Edad;
	char Sexo[10];
	float Estatura; 
	cout<<"Digita tu edad: "; cin>>Edad;
	cout<<"Escribe tu sexo: ";cin>>Sexo;
	cout<<"Digita tu estatura: ";cin>>Estatura;
	
	cout<<"\nEdad: "<<Edad<<endl<<"\nSexo: "<<Sexo<<endl<<"\nEstatura: "<<Estatura<<endl;
	
	return 0;
}

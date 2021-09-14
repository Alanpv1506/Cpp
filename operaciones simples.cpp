/*Escribe un programa que lea de la entrada estandar dos numeros y muestre
 la suma, resta ,multiplicacion y division*/

#include <iostream>
using namespace std;
int main (){

int numero1, numero2, suma=0, resta=0, multiplicacion=0, division=0;
cout<<"Digita un numero: ";
cin>>numero1;
cout<<"Digita otro numero: ";
cin>>numero2;
suma=numero1+numero2;
resta=numero1-numero2;
multiplicacion=numero1*numero2;
division=numero1/numero2;	
cout<<"\nLa suma es: "<<suma<<endl;
cout<<"\nLa resta es: "<<resta<<endl;
cout<<"\nLa multiplicacion es: "<<multiplicacion<<endl;
cout<<"\nLa division es: "<<division<<endl;

return 0;
}

//Escribe a/b+1 y muestra en pantalla el resultado
#include<iostream>
using namespace std;
int main(){
float a, b, resultado=0;
cout<<"Digite el valor de a: ";
cin>>a;
cout<<"Digite el valor de b: ";
cin>>b;
cout.precision(2);
resultado=(a/b)+1;//Cuando es un expresion corta los parentesis son opcioales
cout<<"El resultado es "<<resultado<<endl;	

return 0;	
}

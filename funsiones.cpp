//Realisa un prograa que calcule el valor que toma la siguiente funsion f(x,y)=sqrt(x)/powy(2)-1
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float x, y, resultado=0;
	cout<<"Digite el valor de x: ";cin>>x;
	cout<<"Digite el valor de y: ";cin>>y;
	
	resultado=(sqrt(x))/(pow(y,2)-1);
	
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	
	
	return 0;
}

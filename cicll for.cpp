#include <iostream>
using namespace std;

int main(){
	int lista[] ={100, 200, 300};
	int limite = 0;
	cout<<"limite: ";
	cin>>limite;
	
	for (int i=0;i< limite;i +=1){
		
		cout<<lista[i]<<endl;
		if (lista[i] ==200){
			break;
		}
	}
	
	
	
	
}

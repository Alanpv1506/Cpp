/*La calificcion de practicas cuenta con un 30%, la teoria cuenta con 60% y la participacion cuenta con 10%
Escribe un programa que lea de la entrada estandar las 3 calificaciones de
 un alumno y escriba en la salida estandar su calificacion final*/
 #include<iostream>
 using namespace std;
 int main(){
 	float practicas, teoria, participacion, calificacion_final=0;
 	cout<<"Digita la calificacion de las practicas:";cin>>practicas;
 	cout<<"Digita la calificacion de la teoria :";cin>>teoria;
 	cout<<"Digita la calificacion de la participacion:";cin>>participacion;
 	practicas*=0.30;
 	teoria*=0.60;
 	participacion*=0.10;
 	calificacion_final=practicas+teoria+participacion;
 	cout<<"\nLa calificacion final es: "<<calificacion_final<<endl;
 	
 	
 	
 	return 0;
 }

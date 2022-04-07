#include<iostream>

using namespace std;

int main(){
	int e;
	//entrada de datos
	cout<<"ingresa tu edad";
	cin>>e;
	//procesamiento de datos:
	if(e>=18){
		cout<<"Tu edad es:"<<e<<endl<<"Puedes votar"; //salida de datos.
	}
	else{
		cout<<"Tu edad es:"<<e<<endl<<"No puedes votar"; //salida de datos.
		
	}
	
	return 0;

	
}

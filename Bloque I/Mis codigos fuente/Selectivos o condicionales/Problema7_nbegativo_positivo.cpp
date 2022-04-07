/*Problema7_nbegativo_positivo_*/
#include<iostream>

using namespace std;

int main(){
	float N,C;
	//entrada de datos
	cout<<"Ingresa un numero negativo o positivo";
	cin>>N;
	/* procesamiento de datos*/
	
	if (N > 0){
		C=N*(-1);
		cout<<"Tu numero es positivo";
		cout<<"Tunumero"<<N<<"convertido a negativo es:"<<C;
			}
	else{
	C=N*(-1);
		cout<<"Tu numero es negativo";
		cout<<"Tunumero"<<N<<"convertido a positivo es:"<<C;
	}	

}





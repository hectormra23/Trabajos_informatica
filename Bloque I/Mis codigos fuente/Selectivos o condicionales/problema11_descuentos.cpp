#include<iostream>
using namespace std;
int main(){
	float c, d ;
	//entrada de datos:
	cout<<"ingresa el valor de cuanto ha sido su compra";
	cin>>c;
	/*procesamiento*/
		if (c > 1000){
		d=c - (c *.20) ;
		cout<<"Tu compra es mayo a 1000$"<<endl;
		cout<<"se aplicara un descuento del 20%"<<endl<<"total:"<<c<<endl<<"con descuento  es:"<<d;
			}
	else{
	
		cout<<"Tu compra es menor a 1000$"<<"("<<c<<")"<<endl;
		cout<<"No se aplicara el descuento UnU";
	}
	
	return 0;
	
	
	
	
}

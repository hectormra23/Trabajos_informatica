#include<iostream>
using namespace std;
int main(){
	int c,d,p,pt;
	p = 350;
	//entrada de datos
	cout<<"¿Cuantas camisas compraste?";
	cin>>c;
	//procesamiento
		if(c >= 3){
		pt= p*c;
		d=pt-(p*.20);	
			cout<<"compraste "<<c<<" camisas"<<endl;
			cout<<"se aplciara un descuento del 20%"<<endl;
			cout<<"precio total"<<pt<<" con descuento:"<<d;
		}
		else{
			pt= p*c;
			d=pt-(p*.20);	
			cout<<"compraste "<<c<<" camisas"<<endl;
			cout<<"se aplciara un descuento del 10%"<<endl;
			cout<<"precio total"<<pt<<" con descuento:"<<d;
		}
	
	
}

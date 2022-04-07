#include<iostream>
#include<math.h>



using namespace std;

int main(){
	//declaro las variables
	double n,e,vf;
	//inicia entrada de datos:
	cout<<"Ingresa el valor del numeor base:";
	cin>>n;
	cout<<"Ingresa el valor del exponente al que deseas elevar:";
	cin>>e;
	//procesmiento de datos:
	
	vf=pow(n,e);
	
	//salida de datos
	
	cout<<"base:"<<n<<endl<<"exponente:"<<e<<endl<<"resultado:"<<vf;
}


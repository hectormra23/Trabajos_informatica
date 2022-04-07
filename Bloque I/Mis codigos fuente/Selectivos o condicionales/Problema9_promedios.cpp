#include<iostream>
using namespace std;
int main(){
	
	int name;
	float a,b,c,d,e,p;

	//entrada de datos:
	cout<<"ingresa tus promedios(5)";
	cout<<"1er";	
	cin>>a;	
	cout<<"2do";	
	cin>>b,
	cout<<"3er";	
	cin>>c;	
	cout<<"4to";	
	cin>>d;	
	cout<<"5to";	
	cin>>e;
	
	cout<<"ingresa tu nombre:";
	cin>>name;
	/* procesamiento: */
	
	
	
	p=(a+b+c+d+e)/5;
	
	if(p>=6){
		cout<<name<<endl;
		cout<<"has acreditado"<<endl<<"tu promedio es:"<<p;
		
	}
	else{	
		cout<<name<<endl;
		cout<<"no has acreditado"<<endl<<"tu promedio es:"<<p;
	}
	
	
}
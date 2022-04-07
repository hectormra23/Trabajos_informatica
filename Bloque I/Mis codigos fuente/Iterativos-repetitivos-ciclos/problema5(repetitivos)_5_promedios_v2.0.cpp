#include<iostream>
using namespace std;
int main(){
	float x , n , a ,b , c , d , e , p;
	//entrada de datos
	for(x=1; x<=10; x++){
		cout<<"Ingresa tu nombre:";
		cin>>n;
		cout<<"ingresa tus notas:"<<endl;
		cout<<"1ra";
		cin>>a;
		cout<<"2da";
		cin>>b;
		cout<<"3ra";
		cin>>c;
		cout<<"4ta";
		cin>>d;
		cout<<"5ta";
		cin>>e;
		
		p =(a+b+c+d+e)/5;
		
		cout<<n<<endl<<"tu promedio es:"<<p;
		
	}
	
	
	
	
	
	
	return 0;
}
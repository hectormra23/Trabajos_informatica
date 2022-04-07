#include<iostream>
#include<math.h>


using namespace std;

int main()
{
	int n,d,u,i;
	/* inicia entrada de datos*/
cout<<"Ingresa un numero de 2 cifras";	
	cin>>n;
	/*inicia procesamiento de datos */
	d=trunc(n/10);
	u= n % 10;
	i=(u*10) + d;
	//salida de datos
	cout<<"tu numero es:"<<n<<endl<<"invertido es:"<<i;
	return 0;
}



/*  mod= % */

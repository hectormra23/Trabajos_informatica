#include <iostream>
#include <math.h>

using namespace std;

int main()
{
//Programa que determina si un número es par o impar

  int num;
//entrada de datos
  cout<<"Escriba un numero: ";
  cin>>num;
//procesamiento
  if(num % 2 == 0){
        cout<<num<<endl<<"es un numero  par";//salidad de datos
        }

   else{
     cout<<num<<endl<<"es un numero  impar";//salida de datos
     }
     return 0;
}

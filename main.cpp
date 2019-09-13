#include<stdio.h>
#include <iostream>
#include <math.h>
using namespace std ;

void binario(int);
//DECIMAL A BINARIO
void binario(int num)
{
   int aux;

   if(num==0)
      return;

   aux=num%2;
   num=num/2;
   binario(num);
   cout << aux  ;
}

int main()
{
   int num;

    cout << "Introduce el numero que deseas convertir a binario: "<< endl ;
    cin >> num ;
    binario(num);
    cout << endl ;
    int b,d=0,e=0,c=0;
	cout<<"Ingrese numero Binario: "<<endl ;
	cin>>b;

	while(b>=10){
		c=0;
		while(b>=10){
        b=b-10;
        c++;
		}
		d=d+b*pow(2,e);
		e++;
		b=c;
	}
	d=d+c*pow(2,e);

	cout<<endl<<"El numero entero es  "<<d<<endl;

   return 0;
}



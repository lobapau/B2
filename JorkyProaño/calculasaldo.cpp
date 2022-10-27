#include <iostream>
using namespace std;
int main  ()
{
	float JAPP_x,JAPP_s= 0 ;
	int JAPP_i= 0 ,JAPP_l;
	cout<< " Ingrese cantidad de egrasos (1) : " ;
	cin>>JAPP_l;
	cout<< " Ingrese el saldo inicial (s) : " ;
	cin>>JAPP_s;
	do {
		cout<< " Ingreso egreso (x) : " ;
		cin>>JAPP_x;
		JAPP_i=JAPP_i+ 1 ;
		JAPP_s=JAPP_s+JAPP_x;
	} while (JAPP_i<JAPP_l);
	cout<< " El saldo final es: " <<JAPP_s<<endl;
	return  0 ;

}

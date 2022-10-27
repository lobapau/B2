// Creador por Colobon Pauloba

#include<iostream>
using namespace std;
int main()

{
	float CBPJ_x,CBPJ_s= 0 ;
	int CBPJ_i= 0 ,CBPJ_l;
	cout<< " Ingrese cantidad de egrasos (1) : " ;
	cin>>CBPJ_l;
	cout<< " Ingrese el saldo inicial (s) : " ;
	cin>>CBPJ_s;
	do{
		cout<< " Ingreso egreso (x) : " ;
		cin>>CBPJ_x;
		CBPJ_i=CBPJ_i+ 1 ;
		CBPJ_s=CBPJ_s+CBPJ_x;
	}while(CBPJ_i<CBPJ_l);
	cout<< " El saldo final es: " <<CBPJ_s<<endl;
	return  0 ;

}

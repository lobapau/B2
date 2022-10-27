// Creador por Garcia Jickson

#include<iostream>
using namespace std;
int main()

{
	float GVJM_x,GVJM_s= 0 ;
	int GVJM_i= 0 ,GVJM_l;
	cout<< " Ingrese cantidad de egrasos (1) : " ;
	cin>>GVJM_l;
	cout<< " Ingrese el saldo inicial (s) : " ;
	cin>>GVJM_s;
	do{
		cout<< " Ingreso egreso (x) : " ;
		cin>>GVJM_x;
		GVJM_i=GVJM_i+ 1 ;
		GVJM_s=GVJM_s+GVJM_x;
	}while(GVJM_i<GVJM_l);
	cout<< " El saldo final es: " <<GVJM_s<<endl;
	return  0 ;

}

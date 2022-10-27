//creado por Garcia Jickson

#include<iostream>
using namespace std;
int main()

{
	float JMGV_x,JMGV_s=0,JMGV_vb,JMGV_piva=12,JMGV_viva,JMGV_pdesc=10,JMGV_vdesc,JMGV_vn;
	int JMGV_i=0,JMGV_l;
	cout<<"Ingrese l: ";
	cin>>JMGV_l;
	do{
		cout<<"Ingrese x: ";
		cin>>JMGV_x;
		JMGV_i=JMGV_i+1;
		JMGV_s=JMGV_s+JMGV_x; 
	}while(JMGV_i<JMGV_l);
	JMGV_vb=JMGV_s;
	JMGV_viva=JMGV_vb*JMGV_piva/100;
	JMGV_vdesc=JMGV_vb*JMGV_pdesc/100;
	JMGV_vn=JMGV_vb+JMGV_viva-JMGV_vdesc;
	cout<<"El valor a pagar es de: "<<JMGV_vn<<endl;
	return 0;
	
}

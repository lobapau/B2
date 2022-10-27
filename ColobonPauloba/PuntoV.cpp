//creado por Colobon Pauloba

#include<iostream>
using namespace std;
int main()

{
	float CBPJ_x,CBPJ_s=0,CBPJ_vb,CBPJ_piva=12,CBPJ_viva,CBPJ_pdesc=10,CBPJ_vdesc,CBPJ_vn;
	int CBPJ_i=0,CBPJ_l;
	cout<<"Ingrese l: ";
	cin>>CBPJ_l;
	do{
		cout<<"Ingrese x: ";
		cin>>CBPJ_x;
		CBPJ_i=CBPJ_i+1;
		CBPJ_s=CBPJ_s+CBPJ_x; 
	}while(CBPJ_i<CBPJ_l);
	CBPJ_vb=CBPJ_s;
	CBPJ_viva=CBPJ_vb*CBPJ_piva/100;
	CBPJ_vdesc=CBPJ_vb*CBPJ_pdesc/100;
	CBPJ_vn=CBPJ_vb+CBPJ_viva-CBPJ_vdesc;
	cout<<"El valor a pagar es de: "<<CBPJ_vn<<endl;
	return 0;
	
}

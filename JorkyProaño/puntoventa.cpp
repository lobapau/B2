#include<iostream>
using namespace std;
int main()
{
	float JAPP_x,JAPP_s=0,JAPP_vb,JAPP_piva=12,JAPP_viva,JAPP_pdesc=10,JAPP_vdesc,JAPP_vn;
	int JAPP_i=0,JAPP_l;
	cout<<"Ingrese l: ";
	cin>>JAPP_l;
	do{
		cout<<"Ingrese x: ";
		cin>>JAPP_x;
		JAPP_i=JAPP_i+1;
		JAPP_s=JAPP_s+JAPP_x; 
	}while(JAPP_i<JAPP_l);
	JAPP_vb=JAPP_s;
	JAPP_viva=JAPP_vb*JAPP_piva/100;
	JAPP_vdesc=JAPP_vb*JAPP_pdesc/100;
	JAPP_vn=JAPP_vb+JAPP_viva-JAPP_vdesc;
	cout<<"El valor a pagar es de: "<<JAPP_vn<<endl;
	return 0;
	
}

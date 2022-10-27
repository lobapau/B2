// Creado por Colobon Pauloba 


#include<iostream>
using namespace std;
int main()

{
	float  CBPJ_aa,CBPJ_ma,CBPJ_da,CBPJ_an,CBPJ_mn,CBPJ_dn,CBPJ_a,CBPJ_m,CBPJ_d;
	cout<< " Ingrese la fecha actual: " ;
	cin>>CBPJ_aa>>CBPJ_ma>>CBPJ_da;

	cout<< " Ingrese la fecha de nacimiento: " ;
	cin>>CBPJ_an>>CBPJ_mn>>CBPJ_dn;
	if (CBPJ_da>CBPJ_dn){
		CBPJ_d=CBPJ_da-CBPJ_dn;
	}  else {
		CBPJ_da=CBPJ_da+ 30 ;
		CBPJ_ma=CBPJ_ma- 1 ;
		CBPJ_d=CBPJ_da-CBPJ_dn;
	}
	if(CBPJ_ma>CBPJ_mn){
		CBPJ_m=CBPJ_ma-CBPJ_mn;
	} else {CBPJ_ma=CBPJ_ma+ 12 ;
		CBPJ_aa=CBPJ_aa- 1 ;
		CBPJ_m=CBPJ_ma-CBPJ_mn;
	}
	CBPJ_a=CBPJ_aa-CBPJ_an;
	cout<< " Usted tiene " <<CBPJ_a<< " años, " <<CBPJ_m<< " meses, " <<CBPJ_d<< " dias " <<endl;
	return 0 ;

}

// Creado por Garcia Jickson 


#include<iostream>
using namespace std;
int main()

{
	float  GVJM_aa,GVJM_ma,GVJM_da,GVJM_an,GVJM_mn,GVJM_dn,GVJM_a,GVJM_m,GVJM_d;
	cout<< " Ingrese la fecha actual: " ;
	cin>>GVJM_aa>>GVJM_ma>>GVJM_da;

	cout<< " Ingrese la fecha de nacimiento: " ;
	cin>>GVJM_an>>GVJM_mn>>GVJM_dn;
	if (GVJM_da>GVJM_dn){
		GVJM_d=GVJM_da-GVJM_dn;
	}  else {
		GVJM_da=GVJM_da+ 30 ;
		GVJM_ma=GVJM_ma- 1 ;
		GVJM_d=GVJM_da-GVJM_dn;
	}
	if(GVJM_ma>GVJM_mn){
		GVJM_m=GVJM_ma-GVJM_mn;
	} else {GVJM_ma=GVJM_ma+ 12 ;
		GVJM_aa=GVJM_aa- 1 ;
		GVJM_m=GVJM_ma-GVJM_mn;
	}
	GVJM_a=GVJM_aa-GVJM_an;
	cout<< " Usted tiene " <<GVJM_a<< " años, " <<GVJM_m<< " meses, " <<GVJM_d<< " dias " <<endl;
	return 0 ;

}

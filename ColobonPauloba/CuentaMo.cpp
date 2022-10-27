// creado por Colobon Pauloba

#include<iostream>
using namespace std;
int main()

{
	float CBPJ_x, CBPJ_s= 0 , CBPJ_s1= 0 , CBPJ_s5= 0 ;
	int CBPJ_i= 0 ,CBPJ_l,CBPJ_i1= 0 ,CBPJ_i5= 0 ;
	cout<< " Ingreso l: " ;
	cin>>CBPJ_l;
	do{
		cout<< " Ingreso x: " ;
		cin>>CBPJ_x;
		CBPJ_i=CBPJ_i+ 1 ;
		CBPJ_s=CBPJ_s+CBPJ_x;
		if(CBPJ_x== 1 ){
			CBPJ_i1=CBPJ_i1+ 1 ;
			CBPJ_s1=CBPJ_s1+CBPJ_x;

		}else {
			CBPJ_i5=CBPJ_i5+ 1 ;
			CBPJ_s5=CBPJ_s5+CBPJ_x;
		}

	} while (CBPJ_i<CBPJ_l);

	cout<< " La cantidad de monedas fue : " <<CBPJ_i<<endl;

	cout<< " El valor fue: " <<CBPJ_s<<endl;

	cout<< " La cantidad de monedas s1 fue : " <<CBPJ_i1<<endl;
	cout<< " El valor fue : " <<CBPJ_s1<<endl;

	cout<< " La cantidad de monedas i5 : " <<CBPJ_i5<<endl;

	cout<< " El valor fue : " <<CBPJ_s5<<endl;

	return 0;

}

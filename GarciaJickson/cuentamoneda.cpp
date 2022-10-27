// creado por Garcia Jickson

#include<iostream>
using namespace std;
int main()

{
	float GVJM_x, GVJM_s= 0 , GVJM_s1= 0 , GVJM_s5= 0 ;
	int GVJM_i= 0 ,GVJM_l,GVJM_i1= 0 ,GVJM_i5= 0 ;
	cout<< " Ingreso l: " ;
	cin>>GVJM_l;
	do{
		cout<< " Ingreso x: " ;
		cin>>GVJM_x;
		GVJM_i=GVJM_i+ 1 ;
		GVJM_s=GVJM_s+GVJM_x;
		if(GVJM_x== 1 ){
			GVJM_i1=GVJM_i1+ 1 ;
			GVJM_s1=GVJM_s1+GVJM_x;

		}else {
			GVJM_i5=GVJM_i5+ 1 ;
			GVJM_s5=GVJM_s5+GVJM_x;
		}

	} while (GVJM_i<GVJM_l);

	cout<< " La cantidad de monedas fue : " <<GVJM_i<<endl;

	cout<< " El valor fue: " <<GVJM_s<<endl;

	cout<< " La cantidad de monedas s1 fue : " <<GVJM_i1<<endl;
	cout<< " El valor fue : " <<GVJM_s1<<endl;

	cout<< " La cantidad de monedas i5 : " <<GVJM_i5<<endl;

	cout<< " El valor fue : " <<GVJM_s5<<endl;

	return 0;

}

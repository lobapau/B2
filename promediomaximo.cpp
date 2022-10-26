//Creado por Pauloba Colobon

#include<iostream>
using namespace std;
int main()
{
	float CBPJ_x,CBPJ_pm;
	int CBPJ_i=0,CBPJ_l;
	cout<<"Ingrese l: ";
	cin>>CBPJ_l;
	do{
		cout<<"Ingrese x: ";
		cin>>CBPJ_x;
		CBPJ_i=CBPJ_i+1;
		if(CBPJ_x>CBPJ_pm){
			CBPJ_pm=CBPJ_x;
		}
	}while(CBPJ_i<CBPJ_l);
	cout<<"El promedio maximo de el curso fue: "<<CBPJ_pm<<endl<<endl;
	return 0;
}

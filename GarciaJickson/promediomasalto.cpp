//Creado por Garcia Jickson

#include<iostream>
using namespace std;
int main()
{
	float GVJM_x,GVJM_pm;
	int GVJM_i=0,GVJM_l;
	cout<<"Ingrese l: ";
	cin>>GVJM_l;
	do{
		cout<<"Ingrese x: ";
		cin>>GVJM_x;
		GVJM_i=GVJM_i+1;
		if(GVJM_x>GVJM_pm){
			GVJM_pm=GVJM_x;
		}
	}while(GVJM_i<GVJM_l);
	cout<<"El promedio maximo de el curso fue: "<<GVJM_pm<<endl<<endl;
	return 0;
}

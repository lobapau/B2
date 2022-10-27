#include<iostream>
using namespace std;
int main()
{
	float JAPP_x,JAPP_pm;
	int JAPP_i=0,JAPP_l;
	cout<<"Ingrese l: ";
	cin>>JAPP_l;
	do{
		cout<<"Ingrese x: ";
		cin>>JAPP_x;
		JAPP_i=JAPP_i+1;
		if(JAPP_x>JAPP_pm){
			JAPP_pm=JAPP_x;
		}
	}while(JAPP_i<JAPP_l);
	cout<<"El promedio maximo de el curso fue: "<<JAPP_pm<<endl<<endl;
	return 0;
}

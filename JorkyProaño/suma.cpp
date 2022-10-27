#include<iostream>
 using namespace std;                                                                                                                                            //creadoporJorkyProaño

int main()

  {
float JAPP_x,JAPP_s=0.0;

int JAPP_i=0,JAPP_l;

cout<<"Ingrese el valor de JAPP_l: ";                                                                                                                                            cin>>JAPP_l;                                                      
do{

cout<<"Ingrese el valor de JAPP_x: ";

cin>>JAPP_x;

JAPP_i=JAPP_i+1;

JAPP_s=JAPP_s+JAPP_x;

}while(JAPP_i<JAPP_l);                                            
cout<<"La suma de los número fue: "<<JAPP_s<<endl;                                                                                                                  return 0;

}

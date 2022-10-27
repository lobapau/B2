#include<iostream>
 using namespace std;                                                                                                                                            //creadopor Garcia Jickson

int main()

  {
float JMGV_x,JMGV_s=0.0;

int JMGV_i=0,JMGV_l;

cout<<"Ingrese el valor de JMGV_l: ";                                                                                                                                            cin>>JMGV_l;                                                      
do{

cout<<"Ingrese el valor de JMGV_x: ";

cin>>JMGV_x;

JMGV_i=JMGV_i+1;

JMGV_s=JMGV_s+JMGV_x;

}while(JMGV_i<JMGV_l);                                            
cout<<"La suma de los número fue: "<<JMGV_s<<endl;                                                                                                                  return 0;

}

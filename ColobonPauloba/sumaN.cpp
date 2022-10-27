#include<iostream>
 using namespace std;                                                                                                                                            //creadoporPaulobaColobon

int main()

  {
float CBPJ_x,CBPJ_s=0.0;

int CBPJ_i=0,CBPJ_l;

cout<<"Ingrese el valor de CBPJ_l: ";                                                                                                                                            cin>>CBPJ_l;                                                      
do{

cout<<"Ingrese el valor de CBPJ_x: ";

cin>>CBPJ_x;

CBPJ_i=CBPJ_i+1;

CBPJ_s=CBPJ_s+CBPJ_x;

}while(CBPJ_i<CBPJ_l);                                            
cout<<"La suma de los número fue: "<<CBPJ_s<<endl;                                                                                                                  return 0;

}

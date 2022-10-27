// Creado por Garcia Jickson


#include<iostream>
using namespace std;
int main()
{
	float GVJM_imc,GVJM_peso,GVJM_altura;
	cout<<"Ingrese el peso (kg) : ";
	cin>>GVJM_peso;
	cout<<"Ingrese la altura (metros) : ";
	cin>>GVJM_altura;
	GVJM_imc=GVJM_peso/(GVJM_altura*GVJM_altura);
	if(GVJM_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}if(GVJM_imc>=18.5 && GVJM_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}if(GVJM_imc>=25 && GVJM_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}if(GVJM_imc>50){
		cout<<"Usted tiene obesidad tipo IV (Extrema)"<<endl;
	}
	return 0;

}

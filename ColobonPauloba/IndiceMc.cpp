// Creado por Colobon Pauloba


#include<iostream>
using namespace std;
int main()
{
	float CBPJ_imc,CBPJ_peso,CBPJ_altura;
	cout<<"Ingrese el peso (kg) : ";
	cin>>CBPJ_peso;
	cout<<"Ingrese la altura (metros) : ";
	cin>>CBPJ_altura;
	CBPJ_imc=CBPJ_peso/(CBPJ_altura*CBPJ_altura);
	if(CBPJ_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}if(CBPJ_imc>=18.5 && CBPJ_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}if(CBPJ_imc>=25 && CBPJ_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}if(CBPJ_imc>50){
		cout<<"Usted tiene obesidad tipo IV (Extrema)"<<endl;
	}
	return 0;

}

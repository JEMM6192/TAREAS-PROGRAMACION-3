#include <iostream>
using namespace std;


int main(){

double PesoKilo=0, AlturaMetro=0, BMI=0;

	

cout<<"ingrese el peso de usuario en kilogramos: "<<endl;
cin>>PesoKilo;

cout<<"Ingrese la altura en metros"<<endl;
cin>>AlturaMetro;

BMI=PesoKilo/(AlturaMetro*AlturaMetro);	
	
cout<<"\nBMI= "<<BMI<<endl;

if(BMI<18.5)
 {
cout<<"Bajo Peso"<<endl;
 }
 
else

if(BMI>=18.5 && BMI<=24.9)
{
	cout<<"peso Normal "<<endl;
}

else

if(BMI>=25 && BMI<=29.9)
{
	cout<<" Sobrepeso "<<endl;
}
	else
	
if(BMI>=30)
{
	cout<<"Obeso"<<endl;
}

return 0;
	  
}

#include<iostream>

using namespace std;

void MostrarFechaHora(int anio, int mes, int dia, int hora, int minuto){
int *apunt_anio;
apunt_anio=&anio;
	
int *apunt_dia;
int *apunt_hora;
int *apunt_minuto;
string *apunt_mes;



	switch(mes)
	{
		case 1: *apunt_mes="Enero";
		break;
		case 2: *apunt_mes="Febrero";
		break;
		case 3:*apunt_mes="Marzo";
		break;
		case 4: *apunt_mes="Abril";
     	break;
     	case 5: *apunt_mes="Mayo";
		break;
		case 6: *apunt_mes="Junio";
		break;
		case 7: *apunt_mes="Julio";
		break;
		case 8: *apunt_mes="Agosto";
		break;
		case 9: *apunt_mes="Septiembre";
		break;
		case 10: *apunt_mes="Octubre";
		break;
		case 11: *apunt_mes="Noviembre";
		break;
		case 12: *apunt_mes="Diciembre";
		break;
		
default: cout<<"usted ah ingresado un mes correcto"<<endl;
}

if(dia<=31){
apunt_dia=&dia;
}else{
cout<<"Dia incorrecto ingrese nuevamente"<<endl;
}


if(hora<=23)
{
apunt_hora=&hora;
}else{
	cout<<"hora invalida, intente de nuevo "<<endl;
}
if(minuto<60)
{
apunt_minuto=&minuto;
}else{
	cout<<"minuto invalido, intente de nuevo "<<endl;
}


	 cout<<*apunt_dia<<" de "<<*apunt_mes<<" del "<<*apunt_anio<<", "<<*apunt_hora<<*apunt_minuto<<endl;
	}
	
int main(){
	

	MostrarFechaHora(2021,3,30,12,30);
	
	
	
	return 0;
}

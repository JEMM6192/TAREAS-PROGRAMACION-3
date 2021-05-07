#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;


void resultados(int PartidosPendientes,int PuntosAcumulados ){
	
int Equipo,PuntosTotales=0,GolesAnotados=0,GolesRecibidos=0,total=0;
int contador=0;
string frase;
int gano=0,perdio=0,empato=0;

srand(time(NULL));
	
	while(contador<PartidosPendientes)
	{
	int NumRandom = rand() % 11;
    int NumRandom2 = rand() % 11;
    
	GolesAnotados=NumRandom;
	GolesRecibidos= NumRandom2;
	
	if(GolesAnotados==GolesRecibidos){
		frase= " Empato ";
		 PuntosTotales=PuntosTotales+1;
		 empato=empato+1;
       }  
	   else 
	if(GolesAnotados>GolesRecibidos){
		frase= " Gano ";
	
		 PuntosTotales=PuntosTotales+3;
		gano=gano+1;
       }      
		else{
		frase=" Perdio ";
		perdio=perdio+1;
  
	}

	cout<<"En el partido "<<contador+1<<frase<<GolesAnotados<<" - "<<GolesRecibidos<<endl;
	contador++;	
	
}
    total=PuntosAcumulados+PuntosTotales;
    
    cout<<"\nLos puntos totales del equipo  fueron :"<<total<<endl;
	cout<<"Los partidos ganados fueron :"<<gano<<endl;
	cout<<"Los partidos perdidos fueron :"<<perdio<<endl;
	cout<<"Los partidos empatados fueron :"<<empato<<endl;
	

	
	if(total>=30){
		cout<<"\n------Campeon de la temporada------"<<endl;
	}
		else
		cout<<"\nSuerte para la proxima temporada"<<endl;
	}	


int main(){
int Equipo, PartidosPendientes=0,PuntosAcumulados=0;

cout<<"------------La liga Mundial ------------"<<endl; 	
cout<<"1.-Barcelona"<<endl;	
cout<<"2.-Real Madrid "<<endl;	
cout<<"3.-Juventus "<<endl;	
cout<<"4.-Atletico de Madrid"<<endl;	
cout<<"5.-Sevilla "<<endl;	
cout<<"6.-Real Sociedad "<<endl;
cout<<"7.-Valencia "<<endl;
cout<<"8.-Olimpia "<<endl;
cout<<"9.-PSG"<<endl;
cout<<"10.-Chelsea"<<endl;
cout<<"-------------------- ------------"<<endl; 
cout<<"Seleccione su equipo favorito: ";	
cin>>Equipo;

cout<<"\nIngrese la cantidad de partidos pendientes por jugar: ";	
cin>>PartidosPendientes;
cout<<"\nIngrese la cantidad de Puntos acumulados asta la fecha: ";	
cin>>PuntosAcumulados;
cout<<""<<endl;

switch(Equipo)
{
	
	case 1:
	cout<<"------------BARCELONA------------"<<endl;
	cout<<""<<endl;
	resultados(PartidosPendientes,PuntosAcumulados);
	break;
	
	
	
	case 2:
	cout<<"------------REAL MADRID------------"<<endl;
	cout<<""<<endl;
	resultados(PartidosPendientes,PuntosAcumulados);
	break;
	
	case 3:
	cout<<"------------JUVENTUS------------"<<endl;
	cout<<""<<endl;
	resultados(PartidosPendientes,PuntosAcumulados);
	break;
	
	case 4:
	cout<<"------------ATLETICO DE MADRID------------"<<endl;
	cout<<""<<endl;
	resultados(PartidosPendientes,PuntosAcumulados);
	break;
	
	case 5:
	cout<<"------------SEVILLA------------"<<endl;
	cout<<""<<endl;
	resultados(PartidosPendientes,PuntosAcumulados);
	break;
	
	case 6:
	cout<<"------------REAL SOCIEDAD------------"<<endl;
	cout<<""<<endl;
	resultados(PartidosPendientes,PuntosAcumulados);
	break;
	
	case 7:
	cout<<"------------VALENCIA------------"<<endl;
	cout<<""<<endl;
	resultados(PartidosPendientes,PuntosAcumulados);
	break;
	
	case 8:
	cout<<"------------OLIMPIA------------"<<endl;
	cout<<""<<endl;
	resultados(PartidosPendientes,PuntosAcumulados);
	break;
	
	case 9:
	cout<<"------------PSG------------"<<endl;
	cout<<""<<endl;
	resultados(PartidosPendientes,PuntosAcumulados);
	break;
	
	case 10:
	cout<<"------------CHELSEA------------"<<endl;
	cout<<""<<endl;
	resultados(PartidosPendientes,PuntosAcumulados);
	break;
}

return 0;	
}


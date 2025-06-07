#include <iostream>
using namespace std;

int main(){
int dia; 

    cout<<"Ingrese un numero (1-7)"<<endl;
    cin>>dia;

switch (dia)
{
case 1:
    cout<<"Lunes, dia de semana"<<endl;
    break;
case 2:
    cout<<"Martes, dia de semana"<<endl;
    break;
case 3:
    cout<<"Miercoles, dia de semana"<<endl;
    break;
case 4:
    cout<<"Jueves, dia de semana"<<endl;
    break;
case 5:
    cout<<"Viernes, dia de semana"<<endl;
    break;
 case 6:
    cout<<"Sabado, fin de semana"<<endl;
    break;
case 7:
    cout<<"Domingo, fin de semana"<<endl;
    break;

default:
    cout<<"Opcion no valida"<<endl;
    break;
}


    return 0;
}
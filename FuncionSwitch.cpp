#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

 cout<<"Ingrese la opción a ejecutar : "<<endl;
 int opcion = 0;
 cin>>opcion;

 switch (opcion)
 {
    case 1:
        cout <<"Usted esta seleccionado en la opción 1"<<endl;
        break;
    case 2:
        cout<< "Usted esta seleccionado en la opción 2"<<endl;
        break;
    case 3:
        cout<< "Usted esta seleccionado en la opción 3"<<endl;
        break;

    default:
        cout<<"usted ha ingresado una opción incorrecta"<<endl;
 }

}

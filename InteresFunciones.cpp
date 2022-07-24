//Hecho por Esteban Beltran Gomez//
//Este programa regresa una función de cambio a futuro (Foward)
#include<stdio.h>
#include<iostream>
#include <math.h>
using namespace std;

float foward(float CambioActual, float TasaInteresLocal, float TasaInteresExtranjero, float NumeroDiasFuturos);


int main(){
   //Declaran variables//
   float CambioActual, TasaInteresLocal, TasaInteresExtranjero, NumeroDiasFuturos;
   int Iniciador, Opcion;
    //Primera vez que se ejecuta el programa//
        cout<<"Ingrese el tipo de cambio actual :"<<endl;
        cin>>CambioActual;

        cout<<"Ingrese la tasa de interés local :"<<endl;
        cin>>TasaInteresLocal;
        
        cout<<"Ingrese la tasa de interés extranjero :"<<endl;
        cin>>TasaInteresExtranjero;
        
        cout<<"Ingrese el números de días a futuro :"<<endl;
        cin>>NumeroDiasFuturos;

        
        cout<<"El tipo de cambio a futuro (Foward) es : "<< foward(CambioActual,TasaInteresLocal,TasaInteresExtranjero,NumeroDiasFuturos)<<endl;
        cout<<"¿Desea realizar un cambio? Si es así precione 1, de lo contrario seleccione 0: ";
        cin>>Iniciador;
        //Inicia un loop (while) que permite modificar los parametros sin necesidad de re-escribir todos los datos//
        while(Iniciador == 1){
            cout<<"Tipo de cambio actual (1)"<<endl;
            cout<<"Tasa de interés local (2)"<<endl;
            cout<<"Tasa de interés extranjero (3)"<<endl;
            cout<<"Número de días a futuro (4)"<<endl;
            cout<<"Ingrese la opción que desea cambiar :";
            cin>>Opcion;
        //Switch que nos permite modificar la varible//
            switch (Opcion){
                case 1:
                    cout<<"Ingrese el tipo de cambio actual nuevo: ";
                    cin>>CambioActual;
                    cout<<"El tipo de cambio a futuro (Foward) es : "<< foward(CambioActual,TasaInteresLocal,TasaInteresExtranjero,NumeroDiasFuturos)<<endl; 
                    cout<<"Si desea cambiar un valor seleccione 1 de lo contrario seleccione 0: ";
                    cin>>Iniciador;
                    break;
                    return 0;

                case 2:
                    cout<<"Ingrese la tasa de interés local nueva: ";
                    cin>>TasaInteresLocal;
                    cout<<"El tipo de cambio a futuro (Foward) es : "<< foward(CambioActual,TasaInteresLocal,TasaInteresExtranjero,NumeroDiasFuturos)<<endl; 
                    cout<<"Si desea cambiar un valor seleccione 1 de lo contrario seleccione 0: ";
                    cin>>Iniciador;
                    break;
                case 3:
                    cout<<"Ingrese la tasa de interés extranjero nueva : ";
                    cin>>TasaInteresExtranjero;
                    cout<<"El tipo de cambio a futuro (Foward) es : "<< foward(CambioActual,TasaInteresLocal,TasaInteresExtranjero,NumeroDiasFuturos)<<endl;
                    cout<<"Si desea cambiar un valor seleccione 1 de lo contrario seleccione 0: ";
                    cin>>Iniciador;
                    break;
                case 4: 
                    cout<<"Ingrese el Número de días a futuro de nuevo : ";
                    cin>>NumeroDiasFuturos;
                    cout<<"El tipo de cambio a futuro (Foward) es : "<< foward(CambioActual,TasaInteresLocal,TasaInteresExtranjero,NumeroDiasFuturos)<<endl;
                    cout<<"Si desea cambiar un valor seleccione 1 de lo contrario seleccione 0: ";
                    cin>>Iniciador;
                    break;

                default:
                    cout<<"Lo siento, no seleccionaste una opción valida"<<endl;
                    break;
            }
        }   
    return 0;
}

//Función que modela el foward//
float foward(float CambioActual, float TasaLocal, float TasaExtranjero, float NumeroDiasFuturos){
    float Forward; 
    TasaLocal = TasaLocal/100;
    TasaExtranjero = TasaExtranjero/100;
    
    Forward = (CambioActual)*(pow(((1+TasaLocal)/(1+TasaExtranjero)), NumeroDiasFuturos/365));
    return Forward;
}


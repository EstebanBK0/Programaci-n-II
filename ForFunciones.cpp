#include<stdio.h>
#include<iostream>

using namespace std;

float Promedio(float Calificaciones[], int Tamano);
void VectorCout(float Calificaciones[] , int tamano);

int main(){
   int Tamano = 10;
   float Calificaciones[Tamano],Promedios;
  
   for(int i=0; i<Tamano; i++){
        cout<<"introduce tu calificacion ["<<i+1<<"]: ";   
        cin >> Calificaciones[i];    
   }
    cout<<"........................"<<endl;
    cout<<"El promedio es: "<<Promedio(Calificaciones, Tamano)<<endl;
    cout<<"........................"<<endl;
    VectorCout(Calificaciones,Tamano);
    
    return 0;
}

float Promedio(float Calificaciones[], int Tamano){
    float Promedio, Sum;

    for(int i=0; i<Tamano; i++){
        Sum += Calificaciones[i];
    }  
    Promedio = Sum/Tamano;
    return Promedio;
}

void VectorCout(float Calificaciones[] , int tamano){
    for(int i = 0 ; i<tamano; i++){
        Calificaciones[i]= Calificaciones[i] + 5;
        cout<<"La calificacion ["<<i+1<<"]: "<<Calificaciones[i]<<endl;
    }
}
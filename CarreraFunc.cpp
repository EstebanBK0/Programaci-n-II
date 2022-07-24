#include <iostream>
using namespace std;
float Promedio(float CorredoresTiempo[]);
void CasosMen(float CorredoresTiempo[]);
float Ritmo(float CorredoresTiempo[]);

int main(){
   
   float CorredoresTiempo[7]{23,36,19,22,28,25,31};
   //int Fechas[8]{24,25,26,27,28,29,30,31};//
   //int Casos[8];//
  
   /*for(int i = 0;i<8;i++){
        cout<<"¿Cuál es el tiempo del corredor ["<<CorredoresTiempo[i]<<"] ?: ";
        cin>>CorredoresTiempo[i];
   }*/
    
    cout<<".............................................."<<endl;
    cout<<"El promedio de los corredores para concluir la carrera fue de: "<<Promedio(CorredoresTiempo)<<" min"<<endl;
    cout<<".............................................."<<endl;
    
    CasosMen(CorredoresTiempo);

    cout<<".............................................."<<endl;
    cout<<"El promedio del ritmo del corredor más lento fue de: "<<Ritmo(CorredoresTiempo)<<" min/km"<<endl;

    
    
    return 0;
}

float Promedio(float CorredoresTiempo[]){
    float Suma = 0;
    float Promedio;
    
    for(int i=0;i<7;i++){
        Suma += CorredoresTiempo[i];
    }
    
    Promedio = (Suma/7);
    return Promedio;
}

void CasosMen(float CorredoresTiempo[]){
   cout<<"Los corredores por debajo de los 25 min fueron"<<endl;
    for(int i = 0; i<7; i++){
        if(CorredoresTiempo[i] < 25){
            cout<<"El corredor ["<<i+1<<"]: "<<CorredoresTiempo[i]<<" min"<<endl;
        }
    }
}

float Ritmo(float CorredoresTiempo[]){
    float Mayor = 0;
    float Ritmo[7];
    
    for(int i = 0; i<7;i++){
        Ritmo[i] = CorredoresTiempo[i]/5;
        if(Ritmo[i]>Mayor){
            Mayor = Ritmo[i];
        }
    }

    return Mayor;
}
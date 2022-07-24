#include <iostream>
using namespace std;
float Positividad(int Casos[], int Pruebas);
float Letalidad(int Casos[], int Fallecimientos);
void CasosMenMay(int Casos[], int Fechas[]);

int main(){
   
   int Casos1[8]{110,188,182,150,102,230,127,96};
   int Fechas[8]{24,25,26,27,28,29,30,31};
   int Casos[8];
   int Fallecimientos, Pruebas;
  

   for(int i = 0;i<8;i++){
        cout<<"¿Cuántos casos positivos hubo el día ["<<Fechas[i]<<"] ?: ";
        cin>>Casos[i];
   }
    
    cout<<".............................................."<<endl;
    cout<<"¿Cuántos Pruebas de Covid-19 hubo en ese periodo de tiempo? : ";
    cin>>Pruebas;
    cout<<".............................................."<<endl;
    cout<<"¿Cuántos Fallecimientos hubo en ese periodo de tiempo? :";
    cin>>Fallecimientos;
    
    cout<<".............................................."<<endl;
    cout<<"Positividad: \n"<<Positividad(Casos, Pruebas)<<endl;
    cout<<".............................................."<<endl;
    
    CasosMenMay(Casos, Fechas);
    
    cout<<".............................................."<<endl;
    cout<<"Letalidad: \n"<<Letalidad(Casos, Fallecimientos)<<endl;
    
    return 0;
}



float Positividad(int Casos[], int Pruebas){
    float Suma = 0;
    float Posi;
    
    for(int i=0;i<8;i++){
        Suma += Casos[i];
    }
    
    Posi = (Suma/Pruebas)*100;
    return Posi;
}

float Letalidad(int Casos[], int Fallecimientos){
    float Suma = 0;
    float Leta;
    
    for(int i=0;i<8;i++){
        Suma += Casos[i];
    }
    
    Leta = (Fallecimientos/Suma)*100;
    return Leta;

}

void CasosMenMay(int Casos[], int Fechas[]){
   cout<<"Casos positivos que se encuentran entre 150 y 200 "<<endl;
    int sum = 0;
    int contador[8];
    for(int i = 0; i<8; i++){
        if(Casos[i] >= 150 && Casos[i]<=200){
            contador[i] = 1;
            cout<<"Día ["<<Fechas[i]<<"]: "<<Casos[i]<<endl;
        }else{
            contador[i] = 0;
        }
        sum += contador[i];
    }
    
    cout<<"Por lo tanto, fueron: "<<sum<<" días"<<endl;
}
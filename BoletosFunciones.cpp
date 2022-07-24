#include<stdio.h>
#include <iostream>
#define Gradas 925;
#define General 810;
using namespace std;

float IVA(float Cantidad);

int main(){
   
   float Total, ImporteTotal;
   int Iniciador, Opcion, NumeroDeBoletos,NumeroDeGradas,NumeroDeGeneral,TotalGeneral,NumeroDeBoletosGeneral,TotalGradas,NumeroDeBoletosGradas,Bandera;

      


    cout<<"Si desea iniciar precione 1, de lo contrario seleccione 0: ";
    cin>>Iniciador;
            
        while(Iniciador == 1){
            cout<<"¿Cuántos boletos desea comprar?: ";
            cin>>NumeroDeBoletos;
                
            if(NumeroDeBoletos<=12){
                cout<<"Ingrese el tipo de boleto que desea de acuerdo al siguiente menu"<<endl;
                cout<<"Gradas (1)"<<endl;
                cout<<"Entrada General (2)"<<endl;
                cout<<"Entrada General y Gradas (3)"<<endl;
                cout<<"Opción seleccionada: ";
                cin>>Opcion;
                cout<<"......................."<<endl;
               

                switch (Opcion){
                    case 1:
                        cout<<"Tipo boleto: Gradas"<<endl;
                        Total = NumeroDeBoletos*Gradas;
                        cout<<"Precio de la compra: "<<Total<<endl;
                        cout<<"Número de boletos: "<<NumeroDeBoletos<<endl;
                        cout<<"IVA : "<<IVA(Total)<<endl;
                        ImporteTotal=Total+IVA(Total);
                        cout<<"Total a pagar: "<<ImporteTotal<<endl;
                        cout<<"Para iniciar de nuevo seleccione 1, para finalizar 0 ";
                        cin>>Iniciador;
                        break;

                    case 2:
                        cout<<"Tipo boleto: General"<<endl;
                        Total = NumeroDeBoletos*General;
                        cout<<"Precio de la compra: "<<Total<<endl;
                        cout<<"Número de boletos: "<<NumeroDeBoletos<<endl;
                        cout<<"IVA : "<<IVA(Total)<<endl;
                        ImporteTotal=Total+IVA(Total);
                        cout<<"Total a pagar: "<<ImporteTotal<<endl;
                        cout<<"Para iniciar de nuevo seleccione 1, para finalizar 0 ";
                        cin>>Iniciador;
                        break;
                    case 3:
                        cout<<"Tipo boleto: General y Gradas"<<endl;
                        cout<<"Introduzca cuantos boletos tipo generales requiere: ";
                        cin>>NumeroDeBoletosGeneral;
                        cout<<"Introduzca cuantos boletos tipo gradas requiere: ";
                        cin>>NumeroDeBoletosGradas;
                        cout<<"......................."<<endl;
                            if(NumeroDeBoletos == Bandera){
                                TotalGeneral = NumeroDeBoletosGeneral*General;
                                TotalGradas = NumeroDeBoletosGradas*Gradas;
                                Bandera = NumeroDeBoletosGeneral + NumeroDeBoletosGradas;
                                Total = TotalGradas + TotalGeneral;

                                cout<<"Precio de la compra: "<<Total<<endl;
                                cout<<"Número de boletos: "<<NumeroDeBoletos<<" de Gradas son "<<NumeroDeBoletosGeneral<<" y de General son "<<NumeroDeBoletosGeneral<<endl;
                                cout<<"IVA : "<<IVA(Total)<<endl;
                                ImporteTotal=Total+IVA(Total);
                                cout<<"Total a pagar: "<<ImporteTotal<<endl;
                                cout<<"Para iniciar de nuevo seleccione 1, para finalizar 0 ";
                                cin>>Iniciador;
                            }else{
                                cout<<"El número de boletos no coincide"<<endl;
                                cout<<"......................."<<endl;
                                return 0;
                            }   
                        break;
                        default:
                            cout<<"Lo siento, no seleccionaste una opción valida"<<endl;
                            return 0;
                    }
            
                }else{
                    cout<<"Solo se pueden 12 boletos por transacción, usted ingreso: "<<NumeroDeBoletos<<endl;
                }   
            }
        
    return 0;
}

    float IVA(float total){
        float iva;
        iva = total * 16/100;
        return iva;
    }
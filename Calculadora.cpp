#include<stdio.h>
#include<iostream>

using namespace std;

float cubo(float num);
float Division(float Dividendo, float Divisor);
float Suma(float Numero1, float Numero2);
float Resta(float numero1, float numero2);
float Multiplicacion(float numero1, float numero2);

int main(){
   
    int iniciador;
    cout<<"Para iniciar 1, para finalizar 0"<<endl;
    cin>>iniciador;

    while (iniciador == 1){
    
    
    
        cout<<"Ingrese el operador (+,-,*,/,^) : ";
        char opcion;
        cin>>opcion;

        switch (opcion)
        {
            case '+':
                cout <<"Usted esta seleccionado en la opción suma!"<<endl;
                
                float Numero1, Numero2;
                    cout<<"ingrese el numero 1: ";
                    cin>>Numero1;
                    cout<<"ingrese el numero 2 : ";
                    cin>>Numero2;
                    cout<<"El resultado es: "<<Suma(Numero1 , Numero2)<<endl;
                
                break;
            case '-':
                cout<< "Usted esta seleccionado en la opción resta!"<<endl;

                    float NumeroR1, NumeroR2;
                    cout<<"ingrese el numero: ";
                    cin>>NumeroR1;
                    cout<<"ingrese el numero que desea restar al numero previo: ";
                    cin>>NumeroR2;
                    cout<<"El resultado es: "<<Resta(NumeroR1 , NumeroR2)<<endl;

                break;
            case '*':
                cout<< "Usted esta seleccionado en la opción multiplicación!";
                    
                    float NumeroM1, NumeroM2;
                    cout<<"ingrese el numero 1: ";
                    cin>>NumeroM1;
                    cout<<"ingrese el numero 2 : ";
                    cin>>NumeroM2;
                    cout<<"El resultado es: "<<Multiplicacion(NumeroM1 , NumeroM2);
                
                
                break;

            case '/':
                cout<< "Usted esta seleccionado en la opción división!";
                    
                    float Dividendo, Divisor;
                    cout<<"ingrese el dividendo : ";
                    cin>>Dividendo;
                    cout<<"ingrese el divisor : ";
                    cin>>Divisor;
                    cout<<"El resultado es: "<<Division(Dividendo, Divisor);

                break;
            
            case '^':
                cout<< "Usted esta seleccionado en la opción al cubo!";
                    
                    float num;
                    cout<<"ingrese un numero : ";
                    cin>>num;
                    cout<<num<<" al cubo es: "<<cubo(num);
                
                break;

            default:
                cout<<"usted ha ingresado una opción incorrecta"<<endl;
                break;
        }
    
        cout<<"Para iniciar 1, para finalizar 0"<<endl;
        cin>>iniciador;
    }

    
    return 0;
}

float cubo(float num){
    float resultado;
    resultado = num*num*num;
    return resultado;
}

float Division(float Dividendo, float Divisor){
    float resultado;
    resultado = Dividendo/Divisor;
    return resultado;
}

float Suma(float numero1, float numero2){
    float resultado;
    resultado = numero1+numero2;
    return resultado;
}

float Resta(float numero1, float numero2){
    float resultado;
    resultado = numero1-numero2;
    return resultado;
}

float Multiplicacion(float numero1, float numero2){
    float resultado;
    resultado = numero1*numero2;
    return resultado;
}


#include <iostream>
using namespace std;

int menor (int a, int b);
int mayor (int a, int b, int c);
int eleva (int a);

int main(){
    int a , b, c , opcion, Iniciador;
    cout<<"Si desea iniciar precione 1, de lo contrario seleccione 0: ";
    cin>>Iniciador;
    
    while(Iniciador == 1){
        cout<<"ingrese los valores de los numero"<<endl;
        cout<<"a: ";
        cin>>a;
        cout<<"b: ";
        cin>>b;
        cout<<"c: ";
        cin>>c;
        cout<<"................................................"<<endl;

        cout<<"Encontrar el número menor (1)"<<endl;
        cout<<"Encontrar el número mayor (2)"<<endl;
        cout<<"Encontrar el cuadrado de un número (3)"<<endl;
        cout<<"Opción seleccionada : ";
        cin>>opcion;
        
        switch(opcion){
            case 1: 
                cout<<"................................................"<<endl;
                cout<<"Usted selecciono encontrar el número menor (1)"<<endl;
                cout<<"El número menor es: "<<menor(a,b)<<endl;
                cout<<"Si desea iniciar precione 1, de lo contrario seleccione 0: ";
                cin>>Iniciador;
                break;
            case 2: 
                cout<<"................................................"<<endl;
                cout<<"Usted selecciono encontrar el número mayor (2)"<<endl;
                cout<<"El número mayor es: "<<mayor(a,b,c)<<endl;
                cout<<"Si desea iniciar precione 1, de lo contrario seleccione 0: ";
                cin>>Iniciador;
                break;
            case 3:
                cout<<"................................................"<<endl;
                cout<<"Usted selecciono encontrar el cuadrado de un número (3)"<<endl;
                cout<<"El número al cuadrado es: "<<eleva(a)<<endl;
                cout<<"Si desea iniciar precione 1, de lo contrario seleccione 0: ";
                cin>>Iniciador;
                break;
            default: 
                cout<<"No selecciono una opción valida"<<endl;
                break;
            }
    }
    return 0;
}

int menor (int a, int b){
    
    if (a>b){
        return b;
    }else{
        if(a<b){
            return a;
        }else {
            if(a==b){
                return a;
            }
        }
    }
}

int mayor (int a, int b, int c){
    
    if (a>b && a>c){
        return a;
    }else{
        if(a<b && b>c){
            return b;
        }else{
            if(c>a && c>b){
                return c;
            }else{
                if(a==c==b){
                    return a;
                }
            }
            
        } 
    }
}

int eleva (int a){
    int eleva;
    eleva  = a*a*a;
    return eleva;
}
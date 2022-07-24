#include <iostream>
using namespace std;


int PrecioProducto (int Precio, int Impuesto);
int main(){
    int Precio, Impuesto;
    cout<<"Ingrese el Precio: ";
    cin>>Precio;
    cout<<"Ingrese el Impuesto : ";
    cin>>Impuesto;

    cout<<"El Precio total con impuestos es: "<<PrecioProducto(Precio, Impuesto)<<endl;


}

int PrecioProducto (int Precio, int Impuesto){
    int Total;
    Total = Precio + Impuesto;
    return Total;
}
#include <iostream>
using namespace std;


int main(){
    int opcion, Size;
    int iniciador = 1;
    char* NombreTienda;
    int NombreProducto[Size]{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int PrecioProducto[Size];
    int Stock[Size];
    



    while(iniciador == 1){

        cout<<"Bienvenido al programa de almacende de datos de la tienda "<<NombreTienda<<endl;
        cout<<".............................................."<<endl;
        cout<<"Las opciones que se pueden realizar son las siguientes:"<<endl;
        cout<<"Ingresar productos nuevos [1]"<<endl;
        cout<<"Dar un producto [2]"<<endl;
        cout<<"Buscar un producto [3]"<<endl;
        cout<<"Modificar el stock y precio [4]"<<endl;
        cout<<".............................................."<<endl;
        
        switch (opcion){
            case 1:
                Size  = 20;
                int NewSize, NewSize2;
                cout<<"Ingrese cuantos productos desea agregar: ";
                cin>>NewSize;
                NewSize2 = Size + NewSize;

                for(int i = 0; i<NewSize2; i++){
                    cout<<"Ingrese el precio del producto: ";
                    cin>>PrecioProducto[i];
                    cout<<"Ingrese el stock del producto: ";
                    cin>>Stock[i];

                    
                }

                for(int i = 0; i<NewSize; i++){
                    cout<<"PrecioArray ["<<i<<"]: "<<PrecioProducto[i]<<endl;
                    cout<<"StockArray ["<<i<<"]: "<<Stock[i]<<endl;

                    
                }
            
                
                for(int i = 0; i<Size; i++){

                }

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
        
            default:
                cout<<"No selecciono una opción correcta"<<endl;
                break;
        } 
    }
   

    
    
    return 0;
}
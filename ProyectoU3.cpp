#include <iostream>
#include <cstring>
using namespace std;


int main(){
    int opcion;
    int Size2 = 20;
    int Size = 50;
    int iniciador;
    char NombreTienda;
    string NombreProducto [Size]{"CocaCola", "CocaCola","CocaCola","CocaCola","CocaCola","CocaCola","CocaCola","CocaCola","CocaCola","CocaCola","CocaCola","CocaCola","CocaCola","CocaCola","CocaCola","CocaCola","CocaCola","CocaCola","CocaCola","CocaCola"};
    int PrecioProducto[Size] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int Stock[Size] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,0,0};
    

    cout<<"Desea iniciar (1), Finalizar (0)"<<NombreTienda<<endl;
    cin>>iniciador;

    while(iniciador == 1){

        cout<<"Bienvenido al programa de almacende de datos de la tienda "<<NombreTienda<<endl;
        cout<<".............................................."<<endl;
        cout<<"Las opciones que se pueden realizar son las siguientes:"<<endl;
        cout<<"Ingresar productos nuevos [1]"<<endl;
        cout<<"Dar un producto [2]"<<endl;
        cout<<"Buscar un producto [3]"<<endl;
        cout<<"Modificar el stock y precio [4]"<<endl;
        cin>>opcion;
        cout<<".............................................."<<endl;

        switch (opcion){
            case 1:
                int NewSize, NewSize2;
                cout<<"Ingrese cuantos productos desea agregar: ";
                cin>>NewSize;
                NewSize2 = Size2 + NewSize;

                for(int i = Size2; i<NewSize2; i++){
                    cout<<"Ingrese el precio del producto: ";
                    cin>>PrecioProducto[i];
                    cout<<"Ingrese el stock del producto: ";
                    cin>>Stock[i];
                    cout<<"Ingrese el Nombre del producto: ";
                    cin>>NombreProducto[i];

                    cout<<"PrecioArray ["<<i<<"]: "<<PrecioProducto[i]<<endl;
                    cout<<"StockArray ["<<i<<"]: "<<Stock[i]<<endl;
                    cout<<"NombreProducto ["<<i<<"]: "<<NombreProducto[i]<<endl;
                   

                }

                for (int j = 0; j<NewSize2 ; j++)
                {
                   cout<<"PrecioArray ["<<j+1<<"]: "<<PrecioProducto[j]<<endl;
                    cout<<"StockArray ["<<j+1<<"]: "<<Stock[j]<<endl;
                    cout<<"StockArray ["<<j+1<<"]: "<<NombreProducto[j]<<endl;
                }
                
               
                break;
            case 2:
                cout<<"PrecioArray"<<endl;

                break;
            case 3:
                cout<<"PrecioArray"<<endl;

                break;
            case 4:
                cout<<"PrecioArray"<<endl;

                break;
        
            default:
                cout<<"No selecciono una opción correcta"<<endl;
            break;
        } 
    }
   

    
    
    return 0;
}
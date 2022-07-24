#include <iostream>
using namespace std;

int signo (int a);
int main(){
    int a;
    cout<<"Ingrese el número: ";
    cin>>a;
    cout<<"El número ingresado es: "<<signo(a)<<endl;
}

int signo(int a){
    if(a>0){
        return 0;
    }else{
        if(a<0){
            return 1;
        }
    }
}
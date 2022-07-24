#include<stdio.h>
#include<iostream>
using namespace std;

float cubo(float num);

int main(){
    
    float num, res;
    cout<<"ingrese un números"<<endl;
    cin>>num;
    
    cout<<num<<" al cubo es "<<cubo(num)<<endl;
    
    return 0;

}

float cubo(float num){
    float resultado;
    resultado = num*num*num;
    return resultado;
}
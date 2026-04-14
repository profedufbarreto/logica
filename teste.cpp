#include<iostream>

int somar(int a, int b){
    return a + b;
}
    

int main(){

    int a, b, resultado;

    std::cout<<"Digite um valor para a: "<<std::endl;
    std::cin>>a;

    std::cout<<"Digite um valor para b: "<<std::endl;
    std::cin>>b;

    resultado = somar(a, b);

    std::cout<<"O resultado final é: "<<resultado<<std::endl;


    return 0;
}
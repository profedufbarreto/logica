#include<iostream>

int a, b, resultado;

void somar(){
    resultado =  a + b;
}
    

int main(){

    std::cout<<"Digite um valor para a: "<<std::endl;
    std::cin>>a;

    std::cout<<"Digite um valor para b: "<<std::endl;
    std::cin>>b;

    somar();

    std::cout<<"O resultado final é: "<<resultado<<std::endl;


    return 0;
}
#include<iostream>
#include<string>

void registro(){

    std::string nome;
    float altura;

    std::cout<<"Digite seu nome: "<<std::endl;
    std::cin>>nome;

    std::cout<<"Digite sua altura: "<<std::endl;
    std::cin>>altura;

    std::cout<<"Seja bem-vindo "<<nome<<std::endl;
    std::cout<<"Você mede "<<altura<<"m."<<std::endl;
}

int main(){

    registro();

    return 0;
}
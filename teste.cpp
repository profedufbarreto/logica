#include<iostream>
#include<string>

void registro(std::string &nome, float &altura){

    std::cout<<"Digite seu nome: ";
    std::getline(std::cin, nome);

    std::cout<<"Digite sua altura: ";
    std::cin>>altura;

    std::cout<<"--- Cadastro realizado ---"<<std::endl;
    std::cout<<"Seja bem-vindo "<<nome<<std::endl;
    std::cout<<"Você mede "<<altura<<"m."<<std::endl;
}

int main(){

    std::string nome;
    float altura;

    registro(nome, altura);

    return 0;
}
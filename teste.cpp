#include<iostream>
#include<string>

    void saudacao(std::string nome){
        std::cout<<"Olá "<<nome<<"!!"<<std::endl;
    }

int main(){

    std::string nome;

    std::cout<<"Digite um nome: "<<std::endl;
    std::cin>>nome;

    saudacao(nome);


    return 0;
}
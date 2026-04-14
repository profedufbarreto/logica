#include<iostream>
#include<string>

    std::string nome;

    void saudacao(){
        std::cout<<"Olá "<<nome<<"!!"<<std::endl;
    }

int main(){

    std::cout<<"Digite um nome: "<<std::endl;
    std::cin>>nome;

    saudacao();


    return 0;
}
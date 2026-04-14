#include<iostream>
#include<string>

std::string saudacao(std::string nome){
    return "Bem-vindo " + nome;
}

int main(){

    std::string nome;
    
    std::cout<<"Digite o seu nome: "<<std::endl;
    std::cin>>nome;

    std::cout<<saudacao(nome)<<std::endl;

    return 0;
}
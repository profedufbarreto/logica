#include<iostream>
#include<string>

    std::string nome;
    float altura;
    int idade;

    void saudacao(){
    std::cout<<"Olá "<<nome<<" Seja bem-vindo(a) a nossa escola!"<<std::endl;
    std::cout<<"Medindo "<<altura<<"m."<<std::endl;
    }

int main(){

    std::cout<<"Digite seu nome: "<<std::endl;
    std::cin>>nome;

    std::cout<<"Digite sua altura: "<<std::endl;
    std::cin>>altura;

    std::cout<<"Digite a sua idade: "<<std::endl;
    std::cin>>idade;

    if(idade < 0){
        std::cout<<"Idade inválida!"<<std::endl;
    }else if(idade <= 12){
        saudacao();
        std::cout<<"Você está na turma Infantil A!"<<std::endl;
    }else if(idade <= 18){
        saudacao();
        std::cout<<"Você está na turma Juvenil!"<<std::endl;
    }else{
        saudacao();
        std::cout<<"Você está na turma Adulto!"<<std::endl;
    }


    return 0;
}
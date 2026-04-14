#include<iostream>
#include<string>

void coletarNumeros(){

    int num1, num2;

    std::cout<<"Digite um valor para num1: "<<std::endl;
    std::cin>>num1;

    std::cout<<"Digite um valor para num2: "<<std::endl;
    std::cin>>num2;
}

int somar(int &num1, int &num2){
    return num1 + num2;
    std::cout<<"O resultado da soma é: "<<somar<<std::endl;
}

int subt(int &num1, int &num2){
    return num1 - num2;
    std::cout<<"O resultado da subtração é: "<<subt<<std::endl;
}

int main(){

    int opcao;
    float resposta;

    std::cout<<"Digite uma opção: "<<std::endl;
    std::cout<<"1 - Soma"<<std::endl;
    std::cout<<"2 - Subtração"<<std::endl;
    std::cout<<"3 - Multiplicação"<<std::endl;
    std::cout<<"4 - Divisão"<<std::endl;
    std::cout<<"5 - Sair"<<std::endl;

    switch(opcao){
        case 1:
            std::cout<<somar()<<std::endl;
            break;
        case 2:
            std::cout<<subt()<<std::endl;
            break;
    }

    return 0;
}
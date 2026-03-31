#include<iostream>
#include<string>

int main(){

    std::string nome;

    std::cout<<"Digite o seu nome: "<<std::endl;
    std::cin>>nome;

    std::cout<<nome.size()<<std::endl;


    return 0;
}
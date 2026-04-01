#include<iostream>

int main(){

    bool teste;
    int idade;

    std::cout<<"Digite sua idade: "<<std::endl;
    std::cin>>idade;

    if(idade >= 18){
        teste = true;
        std::cout<<teste<<std::endl;
    }else{
        teste = false;
        std::cout<<teste<<std::endl;
    }

    return 0;
}
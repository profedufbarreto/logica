#include<iostream>

int main(){

    int idade;

    std::cout<<"Digite a sua idade: "<<std::endl;
    std::cin>>idade;

    bool ehMaior = (idade >= 18);

    std::cout<<ehMaior<<std::endl;

    return 0;
}
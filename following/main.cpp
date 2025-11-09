#include<iostream>
#include<iomanip>
#include<math.h>

int main(){

    float peso, altura, imc, resultado;

    std::cout<<"Digite o peso: "<<std::endl;
    std::cin>>peso;

    std::cout<<"Digite a altura: "<<std::endl;
    std::cin>>altura;

    imc = peso / std::pow(altura, 2);

    if(imc < 18.5){
        std::cout<<imc<<std::endl;
        std::cout<<"Você está abaixo do peso!"<<std::endl;
    }else if(imc < 18.5 && imc > 25){
        std::cout<<imc<<std::endl;
        std::cout<<"Peso normal!"<<std::endl;
    }else{
        std::cout<<imc<<std::endl;
        std::cout<<"Acima do peso!"<<std::endl;
    }

    return 0;
}
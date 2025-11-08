#include<iostream>
#include<iomanip>

int main(){

    int id, horas;
    float valorHora, salario;

    std::cout<<"Digite o ID de um funcionário: "<<std::endl;
    std::cin>>id;

    std::cout<<"Digite a quantidade de horas que o funcionário trabalhou: "<<std::endl;
    std::cin>>horas;

    std::cout<<"Digite o valor hora do funcionário: "<<std::endl;
    std::cin>>valorHora;

    salario = horas * valorHora;

    std::cout<<"ID do funcionário: "<<id<<std::endl;
    std::cout<<"R$: "<<std::fixed<<std::setprecision(2)<<salario<<std::endl;

    return 0;
}
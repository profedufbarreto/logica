#include<iostream>
#include<iomanip>


int main(){

    float salario, novoSalario;
    const float aumento = 1.15;

    std::cout<<"Digite o salário atual: "<<std::endl;
    std::cin>>salario;

    novoSalario = (salario * aumento);

    std::cout<<"O novo salário ficou de R$ "<<std::fixed<<
        std::setprecision(2)<<novoSalario<<std::endl;

    return 0;
}
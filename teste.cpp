#include<iostream>
#include<string>
#include <tuple>

int main(){

    std::tuple<std::string, int, float> person;

    std::cout<<"Digite o nome para o usuário: "<<std::endl;
    std::cin>>std::get<0>(person);

    std::cout<<"Digite a idade para o usuário: "<<std::endl;
    std::cin>>std::get<1>(person);

    std::cout<<"Digite a altura para o usuário: "<<std::endl;
    std::cin>>std::get<2>(person);

    std::cout<<"O nome do usuário é: "<<std::get<0>(person)<<std::endl;
    std::cout<<std::get<1>(person)<<" anos."<<std::endl;
    std::cout<<"Medindo: "<<std::get<2>(person)<<"."<<std::endl;

    return 0;
}
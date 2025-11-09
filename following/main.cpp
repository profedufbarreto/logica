#include<iostream>
#include<iomanip>


int main(){

    float km, litros, media;

    std::cout<<"Digite a quilometragem percorrida: "<<std::endl;
    std::cin>>km;

    std::cout<<"Digite a quantidade de litros usada: "<<std::endl;
    std::cin>>litros;

    media = km / litros;

    std::cout<<"\nVocê percorreu: "<<km<<" km"<<std::endl;
    std::cout<<"\nVocê usou: "<<litros<<" litros"<<std::endl;
    std::cout<<"\nA média de consumo foi de: "<<media<<" km/litros"<<std::endl;

    return 0;
}
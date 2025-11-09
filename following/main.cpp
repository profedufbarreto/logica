#include<iostream>
#include<iomanip>


int main(){

    float nota1, nota2, nota3, media;

    std::cout<<"Digite a primeira nota: "<<std::endl;
    std::cin>>nota1;

    std::cout<<"Digite a segunda nota: "<<std::endl;
    std::cin>>nota2;

    std::cout<<"Digite a terceira nota: "<<std::endl;
    std::cin>>nota3;

    media = (nota1 + nota2 + nota3)/3;

    if(media > 7){
        std::cout<<std::fixed<<
        std::setprecision(2)<<media<<"! Aprovado(a)"<<std::endl;
    }else if(media < 7 && media >= 5){
        std::cout<<std::fixed<<
        std::setprecision(2)<<media<<"! Recuperação"<<std::endl;
    }else{
        std::cout<<std::fixed<<
        std::setprecision(2)<<media<<"! Reprovado"<<std::endl;
    }

    return 0;
}
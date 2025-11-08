#include<iostream>
#include<iomanip>

int main(){

    int a, b, c, d;
    double produto;

    std::cout<<"Digite um valor para A: "<<std::endl;
    std::cin>>a;

    std::cout<<"Digite um valor para B: "<<std::endl;
    std::cin>>b;

    std::cout<<"Digite um valor para C: "<<std::endl;
    std::cin>>c;

    std::cout<<"Digite um valor para D: "<<std::endl;
    std::cin>>d;

    produto = ((a * b) - (c * d));

    std::cout<<"A diferença é de: "<<produto<<std::endl;

    return 0;
}
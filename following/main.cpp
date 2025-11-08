#include<iostream>
#include<iomanip>

int main(){

    double a, b, c, media;

    std::cout<<"Digite um valor para A: "<<std::endl;
    std::cin>>a;

    std::cout<<"Digite um valor para B: "<<std::endl;
    std::cin>>b;

    std::cout<<"Digite um valor para C: "<<std::endl;
    std::cin>>c;

    media = ((a * 2) + (b * 3) + (c * 5)) / (2 + 3 + 5);

    std::cout<<"\nA média é: "<<std::fixed<<std::setprecision(1)<<media<<std::endl;

    return 0;
}
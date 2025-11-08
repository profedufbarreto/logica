#include<iostream>


int main(){

    float a, b, media;

    std::cout<<"Digite um valor para A: "<<std::endl;
    std::cin>>a;

    std::cout<<"Digite um valor para B: "<<std::endl;
    std::cin>>b;

    media = (a + b)/2;

    std::cout<<"\nA média é: "<<media<<std::endl;

    return 0;
}
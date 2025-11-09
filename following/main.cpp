#include<iostream>
#include<iomanip>


int main(){

    int num;

    std::cout<<"Digite um número: "<<std::endl;
    std::cin>>num;

    if(num % 2 == 0){
        std::cout<<"O número é par!";
    }else{
        std::cout<<"O número é ímpar!";
    }

    return 0;
}
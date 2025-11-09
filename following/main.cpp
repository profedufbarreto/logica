#include<iostream>
#include<iomanip>


int main(){

    int a, b, c;

    std::cout<<"Digite um valor para a: "<<std::endl;
    std::cin>>a;

    std::cout<<"Digite um valor para b: "<<std::endl;
    std::cin>>b;

    std::cout<<"Digite um valor para c: "<<std::endl;
    std::cin>>c;

    if(a > b && a > c){
        std::cout<<a<<" é o maior número!"<<std::endl;
    }else if(b > a && b > c){
        std::cout<<b<<" é o maior número!"<<std::endl;
    }else{
        std::cout<<c<<" é o maior número!"<<std::endl;
    }

    return 0;
}
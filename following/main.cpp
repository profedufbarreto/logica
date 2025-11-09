#include<iostream>
#include<iomanip>


int main(){

    float km;
    const int metros = 1000;
    float medida;

    std::cout<<"Quantos KM você fez: "<<std::endl;
    std::cin>>km;

    medida = km * metros;

    std::cout<<std::fixed<<
        std::setprecision(2)<<
            medida<<" metros."<<std::endl;

    return 0;
}
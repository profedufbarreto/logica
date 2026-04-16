#include<iostream>
#include<string>
#include <tuple>

int main(){

    std::tuple<std::string, int, float> person = {"Eduardo", 38, 1.69f};

    std::cout<<std::get<0>(person)<<std::endl;
    std::cout<<std::get<1>(person)<<std::endl;
    std::cout<<std::get<2>(person)<<std::endl;

    return 0;
}
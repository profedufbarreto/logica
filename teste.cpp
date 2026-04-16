#include<iostream>
#include<string>

int main(){

    std::string things[3] = {"Computador", "Guitarra", "Música"};

    for(std::string t : things){
        std::cout<<"Eduardo gosta de "<<t<<std::endl;
    }

    return 0;
}
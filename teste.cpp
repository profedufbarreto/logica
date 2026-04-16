#include<iostream>
#include<thread>
#include<chrono>

int main(){

    for(int i = 1; i <= 12; ++i){
        std::cout<<"Minuto: "<<i<<std::endl;
    
        for(int j = 1; j <= 60; ++j){
            std::cout<<"Segundo: "<<j<<std::endl;

            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    }
    
    

    return 0;
}
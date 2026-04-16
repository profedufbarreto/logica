#include<iostream>
#include<string>

int main(){

    int myNumbers[5] = {1, 2, 3, 4, 5};
    std::string names[3] = {"Eduardo", "Casa", "Computador"};

    for(int num : myNumbers){
        std::cout<<num<<std::endl;
    }

    for(std::string n : names){
        std::cout<<n<<std::endl;
    }

    return 0;
}
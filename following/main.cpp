#include<iostream>
#include<iomanip>


int main(){

    float totalCompra, pagoCliente, troco;

    std::cout<<"O total da compra foi de: R$ "<<std::endl;
    std::cin>>totalCompra;

    std::cout<<"Valor entregue pelo cliente foi de: R$ "<<std::endl;
    std::cin>>pagoCliente;

    troco = totalCompra - pagoCliente;

    std::cout<<"\nO total da compra foi de R$ "<<std::fixed<<
        std::setprecision(2)<<totalCompra<<std::endl;
    
        std::cout<<"\nO valor pago pelo cliente foi de R$ "<<std::fixed<<
        std::setprecision(2)<<pagoCliente<<std::endl;
    
    std::cout<<"\nO troco será de R$ "<<std::fixed<<
        std::setprecision(2)<<troco<<std::endl;

    return 0;
}
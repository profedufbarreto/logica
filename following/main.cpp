#include<iostream>
#include<iomanip>


int main(){

    float valorDaCompra;
    float valorFinal;

    std::cout<<"Digite o valor da compra R$: "<<std::endl;
    std::cin>>valorDaCompra;

    if(valorDaCompra > 200){
        valorFinal = valorDaCompra * 0.90;
        std::cout<<"\nO valor da compra foi de R$ "<<
            std::fixed<<std::setprecision(2)<<
                valorDaCompra<<std::endl;
        std::cout<<"\nCom desconto aplicado de 10%, você pagará R$ "<<
            std::fixed<<std::setprecision(2)<<
                valorFinal<<std::endl;
    }else{
        valorFinal = valorDaCompra * 0.95;
        std::cout<<"\nO valor da compra foi de R$ "<<
            std::fixed<<std::setprecision(2)<<
                valorDaCompra<<std::endl;
        std::cout<<"\nCom desconto aplicado de 5%, você pagará R$ "<<
            std::fixed<<std::setprecision(2)<<
                valorFinal<<std::endl;
    }

    return 0;
}
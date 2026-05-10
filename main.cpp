#include<iostream>
#include<string>

class ContaBancaria{
    private:
    std::string titular;
    double saldo = 1000;

    public:
    ContaBancaria(std::string nome){
        titular = nome;
    }

    void depositar(double valor){
        if(valor > 0)
            saldo += valor;
    }

    void sacar(double valor){
        if (valor > 0 && valor <= saldo)
            saldo -= valor;
        else
            std::cout<<"Saldo insuficiente ou valor inválido!"<<std::endl;
    }

    void exibirSaldo(){
        std::cout<<titular<<" -- Saldo: R$ "<<saldo<<std::endl;
    }
};


int main(){

    ContaBancaria conta("João");
    conta.depositar(500.0);
    conta.sacar(100.0);
    conta.exibirSaldo();

    return 0;
}
#include<stdio.h>


int main(){

    int itens = 50;
    float custoPorItens = 9.99;
    float custoTotal = itens * custoPorItens;
    char moeda = '$';
    char reais = 'R';

    printf("Quantidade de itens: %d\n ", itens);
    printf("Custo por itens %c%c %.2f\n ", reais, moeda, custoPorItens);
    printf("Custo total dos itens %c%c %.2f ", reais, moeda, custoTotal);

    return 0;
}
#include<stdio.h>


int main(){

    int itens = 50;
    float custoPorItens = 9.99;
    float custoTotal = itens * custoPorItens;
    char moeda = '$';

    printf("Quantidade de itens: %d\n ", itens);
    printf("Custo por itens %.2f %c\n ", custoPorItens, moeda);
    printf("Custo total dos itens %.2f %c\n ", custoTotal, moeda);
    printf("O custo total foi de %c %.2f ", moeda, custoTotal);




    return 0;
}
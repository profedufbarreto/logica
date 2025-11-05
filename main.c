#include<stdio.h>


int main(){

    int a, b, soma;

    printf("\nDigite um valor para a: \n");
    scanf("%d", &a);

    printf("\nDigite um valor para b: \n");
    scanf("%d", &b);

    soma = a + b;

    printf("\n\nO resultado da soma é: \n%d\n ", soma);

    return 0;
}
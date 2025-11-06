#include<stdio.h>


int main(){

    int resultado1 = 2 + 3 * 4;
    int resultado2 = (2 + 3) * 4;
    int resultado3 = (2 + 4 * (2 + 8));
    int resultado4 = ((2 + 4) * (2 + 8));

    printf("\n%d", resultado1);
    printf("\n%d", resultado2);
    printf("\n%d", resultado3);
    printf("\n%d", resultado4);

    return 0;
}
#include<stdio.h>


int main(){

    int x = 5;
    int y = 2;

    printf("%d", x > y);
    printf("\n%d", x == y);
    printf("\n%d", x <= y);
    printf("\n%d", x != y);
    printf("\n%d", x < y && x > 4);
    printf("\n%d", x == y || y > 0);
    printf("\n%d", !(x > 4));

    return 0;
}
#include <stdio.h>

/*
 Faça um programa que leia 3 números e imprima o maior deles.
*/

int main() {
    int x, y, z;
    printf("digite um numero\n");
    scanf("%d", &x);
    printf("digite um numero\n");
    scanf("%d", &y);
    printf("digite um numero\n");
    scanf("%d", &z);

    if(x>y && x>z){
        printf("%d e o maior numero",x);
    }
    if(y>x && y>z){
        printf("%d e o maior numero",y);
    } else{
        printf("%d e o maior numero",z);
    }

    return 0;

}

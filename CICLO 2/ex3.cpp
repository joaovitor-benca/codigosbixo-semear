#include <stdio.h>

int main(){

    int v[10];
    int i, P, I;
    P = 0;
    I = 0;

    printf("Digite 10 valores inteiros!\n");

    for (i=0;i<10;i=i+1) {
        scanf("%i", &v[i]);
    }

    for (i=0;i<10;i=i+1) {
        if (v[i]%2 == 0) {
            P = P + 1;
        }
        else {
            I = I + 1;
        }
    }

    printf("Números pares digitados: %i\n", P);
    printf("Números ímpares digitados: %i\n", I);
}
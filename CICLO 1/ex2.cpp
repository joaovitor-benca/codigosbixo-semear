#include <stdio.h>

int main(){

    int soma, sub, mult;
    float A, B, div;

    printf("Digite o primeiro valor:\n");
    scanf("%f",&A);

    printf("Digite o segundo valor:\n");
    scanf("%f",&B);

    soma = A + B;
    sub = A - B;
    div = A / B;
    mult = A*B;

    printf("Seus resultados chegaram!\n");
    printf("Soma: %d\n",soma);
    printf("Subtração: %d\n",sub);
    printf("Divisão: %.2f\n",div);
    printf("Multiplicação: %d\n",mult);

    return 0;
}
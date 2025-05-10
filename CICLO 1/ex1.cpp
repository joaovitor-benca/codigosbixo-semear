#include <stdio.h>

int main(){
    
    int idade;
    float altura;

    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    printf("Digite sua altura:\n");
    scanf("%f", &altura);

    printf("Você tem %d anos e mede %.2f metros de altura!\n", idade, altura);

    return 0;
}
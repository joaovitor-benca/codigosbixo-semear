#include <stdio.h>

int main () {

    int n,soma;
    n = 0;
    soma = 0;

    while (n >= 0) {

        soma = soma + n;

        printf("Digite um valor positivo (negativo para sair do programa):\n");
        scanf("%i", &n);
    }

    printf("A soma dos números foi: %i", soma);

}
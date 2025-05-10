#include <stdio.h>

int main(){

    float Cel, Fah;

    printf("Digite a temperatura em Celsius:\n");
    scanf("%f",&Cel);

    Fah = ((Cel*9/5) + 32);

    printf("Sua temperatura em Fahrenheit é: %.2f\n", Fah);


}
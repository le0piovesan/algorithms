#include <stdio.h>

int main() {
    double num1;
    double num2;

    printf("\nDigite um numero: ");
    scanf("%lf", &num1);
    printf("Digite outro numero: ");
    scanf("%lf", &num2);

    printf("\n");

    printf("A soma entre os numeros: %lf \n", num1 + num2);
    printf("A diferenca entre os numeros: %lf \n", num1 - num2);
    printf("A multiplicacao entre os numeros: %lf \n", num1 * num2);
    printf("A divisao do primeiro numero pelo segundo: %lf \n", num1 / num2);
}
#include <stdio.h>

int main() {
    
    char caracter;
    printf("\nDigite um caracter: ");
    scanf("%c", &caracter);
    printf("O caracter digitado foi: %c \n\n", caracter);


    int numeroInt;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numeroInt);
    printf("O numero inteiro digitado foi: %d \n\n", numeroInt);

    float numeroFloat;
    printf("Digite um numero racional: ");
    scanf("%f", &numeroFloat);
    printf("O numero racional digitado foi: %f \n\n", numeroFloat);
}
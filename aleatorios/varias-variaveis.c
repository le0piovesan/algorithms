#include <stdio.h>

int main() {

    int numero1 = 8;
    int numero2 = 24;
    
    printf("O segundo numero eh %d e o primeiro eh %d", numero2, numero1); //ordem que determina qual valor vai em %d


    printf("\n\n\n");


    char caracter;
    int numeroInt;
    float numeroFloat;

    printf("Digite um caracter: ");
    scanf("%c", &caracter);
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numeroInt);

    printf("Digite um numero racional: ");
    scanf("%f", &numeroFloat);

    printf("Os numeros digitados foram: %c, %d, %f", caracter, numeroInt, numeroFloat);

    return 0;

}
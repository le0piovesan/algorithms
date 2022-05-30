#include <stdio.h>

int main() {
    int celsius;
    int fahrenheit;

    printf("\nDigite um valor de temperatura em graus Celsius: ");
    scanf("%d", &celsius);

    fahrenheit = celsius * 1.8 + 32;

    printf("\nA temperatura em Fahrenheit fica: %d\n", fahrenheit);
}
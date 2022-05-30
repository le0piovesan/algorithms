// 10. Faça um programa que lê um caracter ’F’ ou ’C’, que indica se o próximo número a ser
// digitado corresponde a temperatura em Fahrenheit ou Celsius. Em seguida o programa
// deve ler o valor da temperatura e então imprimir o valor correspondente da temperatura
// na outra unidade de medida. Obs.: (C = 5/9 · (F − 32)).

#include <stdio.h>

int main()
{

    char temp;
    int temperatura;
    int fahrenheit;
    int celsius;

    printf("Digite F para Fahrenheit ou C para Celsius: ");
    scanf("%c", &temp);
    printf("Digite um valor para a temperatura: ");
    scanf("%d", &temperatura);

    if (temp == 'F' || temp == 'f')
    {
        printf("\nA temperatura digitada foi %d Fahrenheit\n", temperatura);
        celsius = (temperatura - 32) * 5 / 9;
        printf("Seu valor correspondente fica: %d Celsius", celsius);
    }

    else if (temp == 'C' || temp == 'c')
    {
        printf("\nA temperatura digitada foi %d Celsius\n", temperatura);
        fahrenheit = temperatura * 1.8 + 32;
        printf("Seu valor correspondente fica: %d Fahrenheit", fahrenheit);
    }

    return 0;
}
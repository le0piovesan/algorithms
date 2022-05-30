// 5. Faça um programa que leia o valor da base e altura de um triângulo e calcule o valor da
// sua área.

#include <stdio.h>

int main()
{

    int base;
    int altura;
    int area;

    printf("Digite um valor para a base do triangulo: ");
    scanf("%d", &base);
    printf("Digite um valor para a altura do triangulo: ");
    scanf("%d", &altura);

    area = base * altura / 2;

    printf("Area do triangulo: %d", area);

    return 0;
}
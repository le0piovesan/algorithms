// 3. Faça um programa que leia um número real x e calcule o valor de f(x) = √x+ (x/2) + x^x
// (pesquise sobre as funções sqrt e pow).

#include <stdio.h>
#include <math.h>

int main()
{

    float x;
    double result;

    printf("Digite um numero real qualquer: ");
    scanf("%f", &x);

    result = sqrt(x) + (x / 2) + pow(x, x);

    printf("O resultado da equacao foi: %f", result);

    return 0;
}
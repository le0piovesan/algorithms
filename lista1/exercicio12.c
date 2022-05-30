// 12. Faça um programa que leia os três lados de um triângulo e informe se ele é isósceles,
// escaleno ou equilátero. OBS: equilátero: possui os três lados iguais; isósceles: possui pelo
// menos dois lados iguais; escaleno: três lados distintos.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{

    setlocale(LC_ALL, "");

    int lado1;
    int lado2;
    int lado3;

    printf("Informe as medidas dos três lados do triângulo: \n");
    scanf("%d", &lado1);
    scanf("%d", &lado2);
    scanf("%d", &lado3);

    if (lado1 == lado2 && lado2 == lado3)
    {
        printf("O triângulo é equilátero");
    }
    else if (lado1 != lado2 && lado2 != lado3)
    {
        printf("O triângulo é escaleno");
    }
    else
    {
        printf("O triângulo é isósceles");
    }

    return 0;
}
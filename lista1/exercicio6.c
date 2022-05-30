// 6. Faça um programa que leia os valores correspondentes aos três lados a, b e c de um
// triângulo. O programa deve então calcular a área A do triângulo utilizando a fórmula de
// Heron.
// Ao calcular a área pela fórmula de Heron e a fórmula da questão anterior, em alguns casos
// obtemos valores ligeiramente diferentes. Qual o motivo disto?

#include <stdio.h>
#include <math.h>

int main()
{

    int a;
    int b;
    int c;
    int s;
    double area;

    printf("Digite um valor para o lado A do triangulo: ");
    scanf("%d", &a);
    printf("Digite um valor para o lado B do triangulo: ");
    scanf("%d", &b);
    printf("Digite um valor para o lado C do triangulo: ");
    scanf("%d", &c);

    s = (a + b + c) / 2;

    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area do triangulo: %lf", area);

    return 0;
}

//Há diferença pois no caso do triangulo feito pela fórmula de Heron estamos tratando possivelmente de um triângulo escaleno.
//Enquanto a fórmula tradicional de base * altura / 2 é utilizada na maioria das vezes em triângulos equiláteros.
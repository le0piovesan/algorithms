// Faça um programa que leia dois valores inteiros nas variáveis x e y e troque o conteúdo
// das variáveis. Refaça este problema sem o uso de outras variáveis que não x e y.

#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    int y;

    printf("Digite um valor para x: ");
    scanf("%d", &x);

    printf("Digite um valor para y: ");
    scanf("%d", &y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("O valor digitado em x ficou: %d\n", x);
    printf("O valor digitado em y ficou: %d", y);

    return 0;
}
// 7. Faça um programa que lê o raio de um disco e imprime sua área e seu perímetro.

#include <stdio.h>
#include <math.h>

int main()
{

    int raio;
    float area;
    float perimetro;

    printf("Digite um valor para o raio do disco: ");
    scanf("%d", &raio);

    area = 3.14 * pow(raio, 2);
    perimetro = 2 * 3.14 * raio;

    printf("Area do disco: %f\n", area);
    printf("Perimetro do disco: %f\n", perimetro);

    return 0;
}
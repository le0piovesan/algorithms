#include <stdio.h>
#include <stdlib.h>

void lerVetor(double v[], int tamanho);
void imprimeVetor(double v[], int tamanho);
void copiaQuadradoVetor(double origem[], double destinho[], int tamanho);
int main()
{
    double origem[10], destino[10];

    lerVetor(origem, 10);
    copiaQuadradoVetor(origem, destino, 10);

    printf("Vetor Original:\n");
    imprimeVetor(origem, 10);

    printf("\nVetor Quadrado:\n");
    imprimeVetor(destino, 10);

    return 0;
}
void lerVetor(double v[], int tamanho)
{
    int i;

    printf("Preencha as posi��es do vetor:\n");
    for (i = 0; i < tamanho; i++)
    {
        printf("V[%d]: ", i);
        scanf("%lf", &v[i]);
    }
    printf("Vetor preenchido com sucesso!\n");
}

void copiaQuadradoVetor(double origem[], double destino[], int tamanho)
{
    int i;

    for (int i = 0; i < tamanho; i++)
    {
        destino[i] = origem[i] * origem[i];
    }
}

void imprimeVetor(double v[], int tamanho)
{
    int i;

    for (i = 0; i < tamanho; i++)
    {
        printf("[%4.2lf] ", v[i]);
    }
    printf("\n");
}

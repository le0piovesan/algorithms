#include <stdio.h>
#include <math.h>

int somaIntervaloPares(int x, int y)
{
    int acumuladora = 0;
    for (int i = x + 1; i < y; i++)
    {
        if (i % 2 == 0)
        {
            acumuladora += i;
        }
    }
    printf("\nSoma do Intervalo Aberto: \n");
    return acumuladora;
};

int main()
{
    int x, y;
    printf("\nDigite aqui dois valores para o intervalo: \n");

    printf("Primeiro valor: ");
    scanf("%d", &x);
    printf("Segundo valor: ");
    scanf("%d", &y);

    printf("%d\n", somaIntervaloPares(x, y));

    return 0;
}

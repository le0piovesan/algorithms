#include <stdio.h>
#include <math.h>

int calcularSoma(int n)
{
    int soma = 0;

    for (int i = 1; i <= n; i++)
    {
        soma += i;
    }

    return soma;
}

int main()
{

    int n;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);
    calcularSoma(n);

    printf("%d", calcularSoma(n));

    return 0;

    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{

    int n;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);

    int soma = 0;

    for (int i = 1; i <= n; i++)
    {
        soma += i;
    }

    printf("%d", soma);

    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{

    int n;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);

    printf("Divisores: \n");

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {

            printf("%d\n", i);
        }
    }

    return 0;
}
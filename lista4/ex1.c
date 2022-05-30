#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int a[6] = {1, 0, 5, -2, -5, 7};

    int soma = 0;

    soma = soma + a[0] + a[1] + a[5];

    printf(" a soma e %d \n", soma);

    a[4] = 100;
    for (i = 0; i <= 6; i++)
        printf("%d  \n", a[i]);
    return 0;
}

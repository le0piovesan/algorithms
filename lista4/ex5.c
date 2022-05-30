#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("vet[%d]", i);
        scanf("%d", &vet[i]);
    }
    int cont = 0;
    for (i = 0; i < 10; i++)
    {
        if (vet[i] % 2 == 0)
            cont++;
    }
    printf("%d ", cont);

    return 0;
}

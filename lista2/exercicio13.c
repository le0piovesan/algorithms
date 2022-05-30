#include <stdio.h>

int main()
{
    int valor;
    scanf("%d", &valor); // faltava & no scanf

    int n = valor;
    int fatorial = 1; // fatorial precisava ser do tipo int

    if (n > -1)
    { //faltava chaves no if
        while (n > 0)
        {
            fatorial *= n;
            n--;
        }
        printf("O fatorial de %d e igual a %d\n", valor, fatorial);
    }
    else
        printf("Nao existe fatorial de %d\n", n);

    return 0;
}
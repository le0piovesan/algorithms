#include <stdlib.h>
#include <stdio.h>

long decimalParaBinario(long dec);

int main(void)
{
    long decimal = 0;

    printf("Digite um valor decimal para descobrir o binario correspondente: ");
    scanf("%ld", &decimal);
    printf("%ld = %ld\n", decimal, decimalParaBinario(decimal));

    return 0;
}

long decimalParaBinario(long dec)
{
    int resto;
    long bin = 0;
    int i = 1;

    while (dec != 0)
    {
        resto = dec % 2;
        dec /= 2;
        bin += resto * i;
        i *= 10;
    }

    return bin;
}
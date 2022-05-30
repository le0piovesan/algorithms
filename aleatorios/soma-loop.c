#include <stdio.h>

int main()
{
    double soma = 0;
    int numerador;
    int denominador;

    for (denominador = 100, numerador = 1; denominador >= 1; denominador--, numerador++)
        soma += (double)numerador / denominador;

    printf("Soma: %lf\n", soma);

    return 0;
}
#include <stdio.h>
#include <math.h>

double raizFloat(double n);

int main()
{

    double n;

    printf("Digite um valor racional para descobrir sua raiz: \n");
    scanf("%lf", &n);

    printf("Raiz de %.2lf = %.2lf\n", n, raizFloat(n));

    return 0;
}

double raizFloat(double n)
{
    double result;
    result = sqrt(n);

    return result;
}
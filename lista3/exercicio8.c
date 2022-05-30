#include <stdio.h>
#include <math.h>

int teste(int n);

int main()
{

    int n;

    printf("Digite um valor inteiro positivo ou negativo: \n");
    scanf("%d", &n);

    teste(n);

    return 0;
}

int teste(int n)
{
    int a, b;

    if (n > 0)
    {
        for (int a = 0; a < n; a++)
        {
            for (int b = 0; b < n; b++)
            {
                if (n == a * b)
                    printf("a = %d b = %d\n", a, b);
            }
        }
    }
    else
    {
        for (int a = 100; a > n; a--)
        {
            for (int b = 100; b > n; b--)
            {
                if (n == a * b)
                    printf("a = %d b = %d\n", a, b);
            }
        }
    }

    return b;
}
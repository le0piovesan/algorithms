#include <stdio.h>

int getPotencia(double a, int b);

int main()
{

    double a;
    int b;

    getPotencia(a, b);

    return 0;
}

int getPotencia(double a, int b)
{
    int result;

    for (int x = 2; x <= 10; x++)
    {
        for (int y = 0; y <= 10; y++)
        {

            switch (y)
            {
            case 0:
                result = 1;
                break;
            case 1:
                result = x;
                break;
            case 2:
                result = x * x;
                break;
            case 3:
                result = x * x * x;
                break;
            case 4:
                result = x * x * x * x;
                break;
            case 5:
                result = x * x * x * x * x;
                break;
            case 6:
                result = x * x * x * x * x * x;
                break;
            case 7:
                result = x * x * x * x * x * x * x;
                break;
            case 8:
                result = x * x * x * x * x * x * x * x;
                break;
            case 9:
                result = x * x * x * x * x * x * x * x * x;
                break;
            case 10:
                result = x * x * x * x * x * x * x * x * x * x;
                break;
            }

            printf("%d^%d = %d\n", x, y, result);
        }
        printf("\n");
    }
}
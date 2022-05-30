// 9. Escreva um programa lê três números e os imprime em ordem (ordem crescente).

#include <stdio.h>

int main()
{

    int a;
    int b;
    int c;
    int aux;

    printf("Digite abaixo 3 numeros inteiros: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if ((a > c) || (b > c))
    {
        if (a > b)
        {
            aux = c;
            c = a;
            a = aux;
        }
        else
        {
            aux = c;
            c = b;
            b = aux;
        }
    }

    if (a > b)
    {
        aux = b;
        b = a;
        a = aux;
    }

    printf("A ordem crescente dos numeros digitados sao: %d, %d, %d", a, b, c);

    return 0;
}
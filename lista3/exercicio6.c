#include <stdio.h>

int soma1(int q, int c);
int soma2(int ra);

int i = 10; // variavel global
int j = 20; // variavel global

int main()
{
    int i, k, ra, p; //variaveis locais
    p = 10;          // variavel local
    ra = 5;          // variavel local

    for (i = 0; i < 3; i++)
    {
        k = soma1(ra, p); // variavel local
        ra = soma2(k);    // variavel local
        printf("%d, %d\n", ra, k);
    }
}

int soma1(int q, int c)
{
    //i = variavel global
    //soma = variavel local pertencente a soma1 que sera mandando para main
    int soma = q + i + c;
    return soma;
}

int soma2(int ra)
{
    // k = variavel local pertencente a main
    // j = variavel global

    int k = j;
    ra = ra + k;
    return ra;
}

//Será impresso:
//45, 25
//85, 65
//125, 105
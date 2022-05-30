#include <stdio.h>

int proxFibonacci(int n);

int main()
{

    int n;

    printf("Digite um valor para descobrir o proximo valor na sequencia de Fibonacci: \n");
    scanf("%d", &n);

    printf("O proximo numero na seq de Fibonacci apos %d = %d\n", n, proxFibonacci(n));

    return 0;
}

int proxFibonacci(int n)
{
    int result;
    int anterior = 0, atual = 1;

    for (int x = 0; result <= n; x++)
    {

        result = anterior + atual;

        anterior = atual;

        atual = result;
    }
    return result;
}
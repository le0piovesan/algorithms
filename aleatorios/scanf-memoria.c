#include <stdio.h>

int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("O valor digitado foi: %d\n", n);
    printf("O endereco de memoria que esta armazenado n: %p", &n);

    return 0;
}
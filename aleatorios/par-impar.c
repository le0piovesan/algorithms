#include <stdio.h>

int main() {
    int valor;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    if(valor % 2 == 1) {
        printf("O valor digitado eh impar");
    }
    if(valor % 2 == 0) {
        printf("O valor digitado eh par");
    }

    return 0;
}
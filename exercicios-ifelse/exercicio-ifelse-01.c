#include <stdio.h>

int main() {

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if ((num % 2 == 0) && (num > 10)) {
        printf("SIM");
    }
    else if ((num % 2 == 1) && (num < 50)) {
        printf("SIM");
    }
    else {
        printf("NAO");
    }

    return 0;
}
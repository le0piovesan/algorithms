#include <stdio.h>

int main () {

    int num1;
    int num2;
    int num3;

    printf("Digite abaixo 3 numeros inteiros: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    if ((num1 > num2) && (num1 > num3)) {
        printf("O maior numero digitado foi: %d", num1);
    }

    else if ((num2 > num1) && (num2 > num3)) {
        printf("O maior numero digitado foi: %d", num2);
    }

    else {
        printf("O maior numero digitado foi: %d", num3);
    }


    return 0;
}
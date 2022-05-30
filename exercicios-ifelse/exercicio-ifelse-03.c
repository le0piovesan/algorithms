#include <stdio.h>

int main() {

    int num1;
    int num2; 
    int num3;
    int storage;

    printf("Digite abaixo 3 numeros inteiros: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    if ((num1 > num3) || (num2 > num3)) {
        if (num1 > num2) {
            storage = num3;
            num3 = num1;
            num1 = storage;
        }
        else {
            storage = num3;
            num3 = num2;
            num2 = storage;
        }
    }

    if (num1 > num2) {
        storage = num2;
        num2 = num1;
        num1 = storage;
    }

    printf("A ordem crescente dos numeros digitados sao: %d, %d, %d", num1, num2, num3);


    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{

    int a, b, result, sair;

    do
    {
        printf("Digite um valor inteiro para a: \n");
        scanf("%d", &a);

        printf("Digite um valor inteiro para b: \n");
        scanf("%d", &b);

        result = pow(a, b);

        printf("\nO resultado de %d elevado a %d fica: %d\n", a, b, result);

        printf("\nDeseja sair? Digite: 1 \n");
        printf("Caso queria tentar novamente digite: 0 \n");
        scanf("%d", &sair);

    } while (sair != 1);

    printf("\nPrograma finalizado.\n");

    return 0;
}
#include <stdio.h>

int main()
{

    int opcao;

    printf("Escolha o prato desejado: de 1 a 4, ou digite 5 para sair\n");
    do
    {
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\nPrato numero 1");
            printf("\nDigite outro prato para escolher ou digite 5 para sair:\n");

            break;

        case 2:
            printf("\nPrato numero 2");
            printf("\nDigite outro prato para escolher ou digite 5 para sair:\n");

            break;

        case 3:
            printf("\nPrato numero 3");
            printf("\nDigite outro prato para escolher ou digite 5 para sair:\n");

            break;

        case 4:
            printf("\nPrato numero 4");
            printf("\nDigite outro prato para escolher ou digite 5 para sair:\n");

            break;

        case 5:
            opcao = 5;
            break;

        default:
            printf("\nPrato nao esta no menu");
            printf("\nDigite outro prato para escolher ou digite 5 para sair:\n");
        }

    } while (opcao != 5);

    printf("\nPrograma finalizado, caso queira escolher ou prato, execute novamente");

    return 0;
}
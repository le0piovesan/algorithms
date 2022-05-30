#include <stdio.h>

int main()
{

    int escolha;

    do
    {
        printf("\n***** Menu: *****\n1 - Prato um\n2 - Prato dois\n3 - Prato tres\n4 - Prato quatro\n5 - Sair\n");
        printf("Digite o prato de escolha: ");
        scanf("%d", &escolha);

        // if (escolha == 1)
        // {
        //     printf("\nPrato escolhido: numero UM\n");
        // }
        // else if (escolha == 2)
        // {
        //     printf("\nPrato escolhido: numero DOIS\n");
        // }
        // else if (escolha == 3)
        // {
        //     printf("\nPrato escolhido: numero TRES\n");
        // }
        // else if (escolha == 4)
        // {
        //     printf("\nPrato escolhido: numero QUATRO\n");
        // }
        // else
        // {
        //     if (escolha != 5)
        //     {
        //         printf("\nPrato nao listado no menu\n");
        //     }
        // }

        switch (escolha)
        {
        case 1:
            printf("\nPrato escolhido: numero UM\n");
            break;

        case 2:
            printf("\nPrato escolhido: numero DOIS\n");
            break;

        case 3:
            printf("\nPrato escolhido: numero TRES\n");
            break;

        case 4:
            printf("\nPrato escolhido: numero QUATRO\n");
            break;

        default:
            if (escolha != 5)
            {
                printf("\nPrato nao listado no menu\n");
            }
        }

    } while (escolha != 5);

    printf("\nadios amigo\n");

    return 0;
}
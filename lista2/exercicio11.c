#include <stdio.h>
#include <math.h>

int main()
{

    int n,
        intervalo1 = 0,
        intervalo2 = 0,
        intervalo3 = 0,
        intervalo4 = 0;

    float num;

    printf("Digite a quantidade de numeros que deseja inserir na sequencia: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Informe um valor para sequencia: \n");
        scanf("%f", &num);

        if (num >= 0 && num <= 25)
            intervalo1++;
        else if (num >= 26 && num <= 50)
            intervalo2++;
        else if (num >= 51 && num <= 75)
            intervalo3++;
        else if (num >= 76 && num <= 100)
            intervalo4++;
        else
            printf("Valor fora dos intervalos");
    }

    printf("Intervalo [0..25]: %d\n", intervalo1);
    printf("Intervalo [26..50]: %d\n", intervalo2);
    printf("Intervalo [51..75]: %d\n", intervalo3);
    printf("Intervalo [76..100]: %d\n", intervalo4);

    return 0;
}
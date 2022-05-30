
//Aqui incluimos as bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    //É declarado uma variável num que receberá os números digitados um por um
    int num;
    //A variavél contadora inicia em 0
    int contadora = 0;

    printf("**Programa para verificar se algum número digitado está entre 10 e 20**\n");

    printf("\nDigite abaixo um de cada vez todos os valores inteiros a serem verificados: \n");
    printf("Caso queira sair digite: 0\n");
    //Inicia com laço do para logo receber um primeiro valor
    //O laço continua enquanto não for digitado o número 0
    do
    {
        //Recebe-se cada valor para num
        scanf("%d", &num);
        //Faz a verificação caso esteja entre 10 e 20
        if (num >= 10 && num <= 20)
        {
            //Se está entre 10 e 20 é incrementado a contadora
            contadora++;
            //Imprime o progresso
            printf("Por enquanto foi digitado %d número(s) que está(ão) entre 10 e 20!\n", contadora);
        }

    } while (num != 0);

    //Caso o 0 seja digitado imediatamente antes de qualquer valor entre 10 e 20 encerra-se com essa mensagem
    if (contadora == 0)
    {
        printf("Não foi digitado nenhum número entre 10 e 20\n");
        printf("Execute o programa novamente");
    }
    //Quando o laço finaliza é exibido o total de valores entre 10 e 20
    else
    {
        printf("\nNo total foram digitados %d números que está(ão) entre 10 e 20\n", contadora);
    }

    return 0;
}

//Aqui incluimos as bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    //Declaramos o número como inteiro
    int num;
    //É pedido no console para o usuário informar um número
    printf("Digite um número inteiro entre 0 e 10: ");
    //O scanf recebe e armazena o valor digitado dentro da variável
    scanf("%d", &num);
    //Abrimos a condição caso o número esteja entre 0 e 10
    if (num >= 0 && num <= 10)
    {
        printf("O número digitado foi: %d.\n", num);
    }
    //Caso o número não esteja dentro da condição anterior e seja qualquer valor diferente é executado o laço else:
    else
    {
        printf("O número digitado foi %d e não está entre 0 e 10.\n", num);
    }

    return 0;
}
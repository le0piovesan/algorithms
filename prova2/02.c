
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//descobre o tamanho da string
int arraySize(char str[])
{
    int i = 0;
    //enquanto o laço nao encontrar uma quebra de linha ou "enter" continua
    while (str[i] != '\0')
    {
        i++;
    }
    //retorna o numero do total de caracteres
    return i;
}

int main()
{
    //criado a string referente ao exemplo do exercicio
    char str[] = "O caractere que mais se repete nessa string";
    //executa a funcao que descobre tamanho da string e guarda na variavel tamanho
    int tam = arraySize(str);
    //inicializado um contador de caracteres baseado na tabela ascii
    int contador[256] = {0};
    //verifica dentro do contador a string
    for (int i = 0; i < tam; i++)
    {
        //incrementa o contador
        contador[str[i]]++;
    }
    //declarado variaveis auxiliares para descobrir o maior char dentro da string
    int atual, maior = 0;
    //declarado um char que guardara o caractere que mais se repete
    char caracter;
    //inicia-se um novo laço
    for (int i = 0; i < 256; i++)
    {
        //caso o contador seja o maior até então a parte percorrida do laço cai na condição
        if (contador[i] > maior)
        {
            //variavel maior guarda o valor atual
            maior = contador[i];
            //caracter guarda o caracter correspondente
            caracter = i;
        }
    }
    //faz a impressão final
    printf("O caractere %c se repete %d vezes\n", caracter, maior);
    return 0;
}

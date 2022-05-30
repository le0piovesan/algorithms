// Ler uma string e imprimir ela invertida
// -> Adicione a possibilidade de ter espaços em branca nas string
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    // variáveis
    char st[81], stInv[81];
    int i, j, tam;

    // Ler a string original a ser invertida
    printf("Digite um string sem espaços em branco: ");
    scanf("%s", st);

    // encontar a posição do '\0'
    tam = 0;
    while (st[tam] != '\0' && tam < 81)
    {
        tam++;
    }

    // inverte a string st colocando sua inversa em stInv
    j = tam - 1; // j vai controlar o indice da string invertida
    i = 0;       // i vai contralar o indice da string normal
    while (i < tam)
    {
        stInv[j] = st[i];
        i++;
        j--;
    }
    stInv[tam] = '\0'; // seta o final da string invertida

    //verificar se a palavra é um palindromo

    int ehPalindromo = 1;

    for (i = 0; i < tam; i++)
    {
        if (st[i] != stInv[i])
        {
            ehPalindromo = 0;
            break;
        }
    }

    if (ehPalindromo == 1)
    {
        printf("A palavra %s, eh um palindromo!\n", st);
    }
    else
    {
        printf("A palavra %s, nao eh um palindromo!\n", st);
    }

    return 0;
}
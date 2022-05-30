// MATRIZ
// Faça um algoritmo que leia as notas de 5 alunos, onde cada aluno fez 4 trabalhos.
// Depois de ler as notas, exiba a média de cada um dos alunos.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float soma;                    // variável auxiliar para o cálculo da média
    int tam_lin = 5;               // linhas  -> alunos
    int tam_col = 4;               // colunas -> notas dos trabalhos
    float notas[tam_lin][tam_col]; // matriz para repredar os alunos e suas notas
    float medias[tam_lin];         // médias de cada um dos alunos

    // preencher as notas
    for (int linha = 0; linha < tam_lin; linha++)
    {

        printf("Notas do Aluno N.%d:\n", linha + 1);
        for (int coluna = 0; coluna < tam_col; coluna++)
        {
            printf("Nota do trabalho N.%d: ", coluna + 1);
            scanf("%f", &notas[linha][coluna]);
        }
        printf("\n");
    }

    // calcula as médias
    for (int linha = 0; linha < tam_lin; linha++)
    {
        soma = 0;
        for (int coluna = 0; coluna < tam_col; coluna++)
        {
            soma += notas[linha][coluna];
        }
        medias[linha] = soma / tam_col;
    }

    // imprime cada média de cada aluno
    for (int linha; linha < tam_lin; linha++)
    {
        printf("Média para o aluno N.%d: %.2f\n", linha + 1, medias[linha]);
    }

    return 0;
}
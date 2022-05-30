#include <stdio.h>
#include <stdlib.h>

int main()
{

    float vet[15];
    float acumuladora = 0;
    float media = 0;

    printf("Preencha com as notas dos alunos.\n\n");
    // gravando as notas dos alunos.
    for (int i = 0; i < 15; i++)
    {
        printf("Aluno [%d] Nota: ", i);
        scanf("%f", &vet[i]);
        // guardadando a nota total dos alunos.
        acumuladora = acumuladora + vet[i];
    }
    // calculando a media da turma.
    media = acumuladora / 15;

    printf("\nA media da turma e: %.2f\n", media);

    return 0;
}

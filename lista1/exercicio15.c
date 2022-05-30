// 15. Uma pessoa pode se aposentar pelo INSS caso esteja em alguma das situações abaixo:

// • É do sexo masculino, possui pelo menos 65 anos, e pelo menos 10 anos de contribuição.
// • É do sexo masculino, possui pelo menos 63 anos, e pelo menos 15 anos de contribuição.
// • É do sexo feminino, possui pelo menos 63 anos, e pelo menos 10 anos de contribuição.
// • É do sexo feminino, possui pelo menos 61 anos, e pelo menos 15 anos de contribuição.

// Crie um programa para ler um caracter ’M’ ou ’F’ que representa o sexo de um indivíduo,
// ler a sua idade, e seu tempo de contribuição. O programa deverá então imprimir “Apo-
// sentável” caso o indivíduo se enquadrar em uma das situações acima. Caso contrário o
// programa deverá imprimir “Não Aposentável”.

#include <stdio.h>

int main()
{

    char sexo;
    int idade, tempo;

    printf("Informe seu sexo (M para Masculino, F para Feminino): ");
    scanf("%c", &sexo);

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Informe seu tempo de contribuicao: ");
    scanf("%d", &tempo);

    if (sexo == 'M' && idade >= 65 && tempo >= 10)
    {
        printf("Aposentável");
        return 0;
    }
    if (sexo == 'M' && idade >= 63 && tempo >= 15)
    {
        printf("Aposentável");
        return 0;
    }
    if (sexo == 'F' && idade >= 63 && tempo >= 10)
    {
        printf("Aposentável");
        return 0;
    }
    if (sexo == 'F' && idade >= 61 && tempo >= 15)
    {
        printf("Aposentável");
        return 0;
    }
    else
    {
        printf("Não Aposentável");
    }

    return 0;
}
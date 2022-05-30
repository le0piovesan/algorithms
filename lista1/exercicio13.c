// 13. Escreva um programa que determina a data cronologicamente maior de duas datas forne-
// cidas pelo usuário. Cada data deve ser fornecida por três valores inteiros onde o primeiro
// representa um dia, o segundo um mês e o terceiro um ano.

#include <stdio.h>

int main()
{

    int dia, mes, ano;
    int dia2, mes2, ano2;

    printf("Digite uma data informando dia: ");
    scanf("%d", &dia);
    printf("Mes: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);

    printf("Digite uma outra data para comparacao informando dia: ");
    scanf("%d", &dia2);
    printf("Mes: ");
    scanf("%d", &mes2);
    printf("Ano: ");
    scanf("%d", &ano2);

    if (ano > ano2)
    {
        printf("A data %d/%d/%d é cronologicamente maior que %d/%d/%d", dia, mes, ano, dia2, mes2, ano2);
    }

    else if (ano == ano2 && mes > mes2)
    {
        printf("A data %d/%d/%d é cronologicamente maior que %d/%d/%d", dia, mes, ano, dia2, mes2, ano2);
    }

    else if (ano == ano2 && mes == mes2 && dia > dia2)
    {
        printf("A data %d/%d/%d é cronologicamente maior que %d/%d/%d", dia, mes, ano, dia2, mes2, ano2);
    }

    else if (ano2 > ano)
    {
        printf("A data %d/%d/%d é cronologicamente maior que %d/%d/%d", dia2, mes2, ano2, dia, mes, ano);
    }

    else if (ano == ano2 && mes2 > mes)
    {
        printf("A data %d/%d/%d é cronologicamente maior que %d/%d/%d", dia2, mes2, ano2, dia, mes, ano);
    }

    else if (ano == ano2 && mes == mes2 && dia2 > dia)
    {
        printf("A data %d/%d/%d é cronologicamente maior que %d/%d/%d", dia2, mes2, ano2, dia, mes, ano);
    }

    else
    {
        printf("As datas são iguais");
    }

    return 0;
}
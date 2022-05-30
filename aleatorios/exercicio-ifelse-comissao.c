#include <stdio.h>

int main()
{

    float vendas;
    float comissao;

    printf("Digite o valor vendido: \n");
    scanf("%f", &vendas);

    if (vendas <= 2500)
    {
        comissao = 30 + (vendas * 1.7 / 100);

        if (comissao < 39)
        {
            comissao = 39;
            printf("Comissao minima de %f\n", comissao);
        }
    }
    else if (vendas >= 2500.01 && vendas <= 6250.00)
    {
        comissao = 56 + (vendas * 0.66 / 100);
    }
    else if (vendas >= 6250.01 && vendas <= 20000)
    {
        comissao = 76 + (vendas * 0.34 / 100);
    }
    else if (vendas >= 20000.01 && vendas <= 50000)
    {
        comissao = 100 + (vendas * 0.22 / 100);
    }
    else if (vendas >= 50000.01 && vendas <= 500000)
    {
        comissao = 155 + (vendas * 0.11 / 100);
    }
    else
    {
        comissao = 255 + (vendas * 0.09 / 100);
    }

    printf("A comissao recebida foi de: %f", comissao);

    // Até R$ 2.500,00, comissão de R$30+1,7%
    // R$2.500,01 até R$6.250,00, comissão de R$56 + 0,66%
    // R$6.250,01 até R$20.000,00, comissão de R$76 + 0,34%
    // R$20.000,01 até R$50.000,00, comissão de R$100 + 0,22%
    // R$50.000,01 até R$500.000,00, comissão de R$155 + 0,11%
    // Mais que R$ 500.000,00, comissão de R$255 + 0,09%

    return 0;
}
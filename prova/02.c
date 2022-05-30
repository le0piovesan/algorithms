
//Aqui incluimos as bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    //É declarado a variável N que guardará o tamanho da sequência
    int N;
    //É declarado a variável que guarda os valores digitados dentro da sequência
    int num;
    //É declarado as variáveis contadoras
    int positivo = 0;
    int zero = 0;
    int negativo = 0;

    //Imprime no console o texto pedindo para o usuário informar um número
    printf("Digite um valor para o tamanho da sequência: ");
    //O número é armazenado na variável
    scanf("%d", &N);
    //É aberto um laço de for para percorrer toda a sequência e adicionar seus respectivos valores dentro
    printf("Informe abaixo os valores para a sequência: \n");
    for (int i = 0; i < N; i++)
    {
        //Por questões de melhor visualização utilizei a variável i + 1 para mostrar o valor atual dentro da sequência
        printf("Valor %d: ", i + 1);
        //É recebido um valor para num
        scanf("%d", &num);

        //Usa a condição para a variável contadora
        //Caso num seja maior que zero ou seja positivo, é incrementado a variável contadora positivo
        if (num > 0)
        {
            positivo++;
        }
        //Caso num seja igual a zero, é incrementado a variável contadora zero
        else if (num == 0)
        {
            zero++;
        }
        //Caso não seja positivo ou igual a zero, só pode ser negativo, é incrementado a variável contadora negativo
        else
        {
            negativo++;
        }
    }

    //Aqui é feito a impressão do resultado
    printf("Foram digitados no total: \n");
    printf("%d número(s) positivo(s)\n", positivo);
    printf("%d zero(s)\n", zero);
    printf("%d número(s) negativo(s)\n", negativo);

    return 0;
}
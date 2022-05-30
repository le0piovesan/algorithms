// 14. Escreva um programa que lê uma coordenada (x, y) do teclado e imprima como resposta
// o quadrante em que a coordenada está.

#include <stdio.h>

int main()
{

    int x, y;

    printf("Digite um valor para x: ");
    scanf("%d", &x);
    printf("Digite um valor para y: ");
    scanf("%d", &y);

    if (x > 0 && y > 0)
        printf("As coordenadas estao no primeiro quadrante");
    if (x < 0 && y > 0)
        printf("As coordenadas estao no segundo quadrante");
    if (x < 0 && y < 0)
        printf("As coordenadas estao no terceiro quadrante");
    if (x > 0 && y < 0)
        printf("As coordenadas estao no quarto quadrante");
    if (x != 0 && y == 0)
        printf("As coordenadas estao no eixo das abscissas");
    if (x == 0 && y != 0)
        printf("As coordenadas estao no eixo das ordenadas");
    else if (x == 0 && y == 0)
        printf("As coordenadas estao na origem do plano cartesiano");

    return 0;
}
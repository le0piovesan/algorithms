// 14. Implemente um programa que compute todas as soluções de equações do tipo

// x1 + x2 + x3 + x4 = C

// . Melhore o seu programa com as seguinte idéias.
// • Fixado x1, os valores possíveis para x2 são 0, . . . , C − x1. Fixado x1 e x2, os valores possíveis
// para x3 são 0, . . . , C − x1 − x2. Fixados x1, x2, e x3, então x4 é unicamente determinado.

#include <stdio.h>
#include <math.h>

int main()
{
    int x1, x2, x3, x4, C;
    printf("Digite um valor para C: ");
    scanf("%d", &C);

    for (x1 = 0; x1 <= C; x1++)
        for (x2 = 0; x2 <= C; x2++)
            for (x3 = 0; x3 <= C; x3++)
                for (x4 = 0; x4 <= C; x4++)
                    if (x1 + x2 + x3 + x4 == C)
                        printf("%d + %d + %d + %d = %d\n", x1, x2, x3, x4, C);

    return 0;
}
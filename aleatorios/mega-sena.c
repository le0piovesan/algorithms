#include <stdio.h>

int main()
{

    int d1, d2, d3, d4, d5, d6;
    unsigned long int contador = 0;

    for (d1 = 1; d1 <= 60; d1++)
        for (d2 = d1 + 1; d2 <= 60; d2++)
            for (d3 = d2 + 1; d3 <= 60; d3++)
                for (d4 = d3 + 1; d4 <= 60; d4++)
                    for (d5 = d4 + 1; d5 <= 60; d5++)
                        for (d6 = d5 + 1; d6 <= 60; d6++)
                            contador++;

    printf("Tem que dar 50063860\n");
    printf("Resposta: %u\n", contador);

    return 0;
}

// [1, 1] [1, 2] [1, 3] [1, 4] [1, 5]
// [2, 1] [2, 2] [2, 3] [2, 4] [2, 5]
// [3, 1] [3, 2] [3, 3] [3, 4] [3, 5]
// [4, 1] [4, 2] [4, 3] [4, 4] [4, 5]
// [5, 1] [5, 2] [5, 3] [5, 4] [5, 5]

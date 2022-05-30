#include <stdio.h>

int main()
{

    for (int linha = 1; linha <= 10; linha++)
    {

        for (int coluna = 1; coluna <= 10; coluna++)
        {
            if (linha == 1 || linha == 10 || coluna == 1 || coluna == 10)
                printf("#");

            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

// [1, 1] [1, 2] [1, 3] [1, 4] [1, 5]
// [2, 1] [2, 2] [2, 3] [2, 4] [2, 5]
// [3, 1] [3, 2] [3, 3] [3, 4] [3, 5]
// [4, 1] [4, 2] [4, 3] [4, 4] [4, 5]
// [5, 1] [5, 2] [5, 3] [5, 4] [5, 5]

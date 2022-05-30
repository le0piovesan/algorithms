#include <stdio.h>
#include <locale.h>
#include <math.h>
#define TAM 10


main()
{
    setlocale(LC_ALL, "Portuguese");
    int n[TAM] = {13,24,15,22,11,
                  19,18,23,25,47,};
    int d,i,limite;
    int verifica;


    verifica=1;

    for(i=0; i<TAM ;i++)
    {
        if (n[i] > 1) {
            d = 2;
            verifica = 1;
            limite = sqrt(n[i]);
            while(verifica && d <= limite)
             {
                if (n[i] % d  == 0){
                    verifica = 0;
                }
                d++;
             }
            if (verifica)
                printf("O n�mero %d, na posi��o: n[%d] � primo.\n", n[i],i);
        }
    }
    return 0;
}

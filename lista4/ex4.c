#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vet[8];
   int soma = 0;
   int i;
   int x, y;

   for (i = 0; i <= 8; i++)
   {
      printf("digite valores para vet[%d]", i);
      scanf("%d", &vet[i]);
   }
   printf("escolha uma posicao x");
   scanf("%d", &x);
   printf("escolha uma posicao y");
   scanf("%d", &y);

   printf("a soma %d ", vet[x] + vet[y]);
   return 0;
}

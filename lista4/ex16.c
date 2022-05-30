#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vet[5];
   int i;
   int codigo;

   // preenchendo o vetor.
   for (i = 0; i < 5; i++)
   {
      printf("Digite um numero: ");
      scanf("%d", &vet[i]);
   }
   // pedindo para o usuario passar um codigo.
   printf("Digite um codigo(0, 1, 2): ");
   scanf("%d", &codigo);
   // verificando se o codigo e igual a 1 e faz a execu��o.
   if (codigo == 1)
   {
      printf("\nOrdem direta\n\n");

      for (i = 0; i < 5; i++)
      {
         printf("%d ", vet[i]);
      }
      // verificando se o codigo e igual a 2 e faz a execu��o.
   }
   else if (codigo == 2)
   {
      for (i = 4; i >= 0; i--)
      {
         printf("%d ", vet[i]);
      }
      // verificando se o codigo e diferente de 0,1,2 e faz a execu��o.
   }
   else if (codigo != 0 && 1 && 2)
   {
      printf("\nCodigo invalido.\n");
   }
   else
   { // verificando se e 0, se for fecha o programa.
      if (codigo == 0)
      {
      }
   }

   return 0;
}

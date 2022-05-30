#include <stdio.h>
#include <stdlib.h>

int main()
{
  int vet[10];
  int i;
  int maior, menor;
  for (i = 0; i < 10; i++)
  {

    printf("digite valores", i);
    scanf("%d", &vet[i]);
  }

  for (i = 0; i < 10; i++)
  {
    //numero maior
    if (maior < vet[i])
    {
      maior = vet[i];
    }
    //numero menor
    if (menor > vet[i])
    {
      menor = vet[i];
    }
  }
  printf("o numero maior e \n");
  printf("%d \n", maior);

  printf("o numero menor e \n");
  printf("%d \n", menor);

  return 0;
}

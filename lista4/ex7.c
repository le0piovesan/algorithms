#include <stdio.h>
#include <stdlib.h>

int main()
{
  int pos = 0;
  int vet[10];
  int i;
  int maior;

  for (i = 0; i <= 10; i++)
  {

    printf("digite valores", i);
    scanf("%d", &vet[i]);
  }

  for (i = 0; i <= 10; i++)
  {
    if (maior < vet[i])
    {
      maior = vet[i];
      pos = i;
    }
  }
  printf("o numero maior e \n");
  printf("%d \n", maior);
  printf("a posicao e\n");
  printf("vet[%d]\n", pos);

  return 0;
}

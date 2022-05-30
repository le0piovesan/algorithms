#include <stdio.h>
#include <stdlib.h>

int main()
{
  int vetor[6];
  int i;
  int j, min, aux;
  for (i = 0; i < 6; i++)
  {
    printf("digite valores ");
    scanf("%d", &vetor[i]);
  }
  for (i = 0; i < (6 - 1); i++)
  {
    min = i;
    for (j = (i + 1); j < 6; j++)
    {
      if (vetor[j] < vetor[min])
      {
        min = j;
      }
    }
    if (i != min)
    {
      aux = vetor[i];
      vetor[i] = vetor[min];
      vetor[min] = aux;
    }
  }
  for (i = 6; i >= 0; i--)
  {
    printf("%d \n", vetor[i]);
  }

  return 0;
}

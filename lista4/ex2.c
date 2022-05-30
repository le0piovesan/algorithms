#include <stdio.h>
#include <stdlib.h>

int main()
{
  int vet[6];
  int i;
  printf("digite valores");
  for (i = 0; i < 6; i++)
  {
    printf("vet[%d]", i);
    scanf("%d", &vet[i]);
  }
  printf("%d\n %d \n %d\n %d\n %d\n%d\n", vet[0], vet[1], vet[2], vet[3], vet[4], vet[5]);

  return 0;
}

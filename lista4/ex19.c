#include <stdio.h>
#include <stdlib.h>


int main(){
    // criando o vetor
    int vet[50] = {};
    // percorrendo o vetor, realizando as opera��es solicitadas e as apresentando
    for(int i = 0; i < 50; i++){
        vet[i] = (i + 5 * i)%(i + 1);
        printf("Vet[%i]=  %i \n", i,vet[i]);
    }

    return 0;
}

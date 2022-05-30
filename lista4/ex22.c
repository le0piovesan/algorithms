#include <stdio.h>
#include <stdlib.h>


int main()
{
    // criando os vetores
    int vetA[10] = {};
    int vetB[10] = {};
    int vetC[10] = {};
    //populando o vetor A
    printf("Vetor A \n");
    for(int i = 0; i < 10; i++){
        printf(" Digite um numero inteiro: \n");
        scanf("%i", &vetA[i]);
    }

    //populando o vetor B
    printf("Vetor B \n");
    for(int i = 0; i < 10; i++){
        printf(" Digite um numero inteiro: \n");
        scanf("%i", &vetB[i]);
    }
    // caso for par o vetor C recebe A, se n�o, o vetor C recebe B
    for(int i = 0; i < 10; i++){
        if(i % 2 == 0){
            vetC[i] = vetA[i];
        }else{
            vetC[i] = vetB[i];
        }
    }
    // imprimindo os vetores
    printf("VetA\t|\tVetB\t|\tVetC\t \n");
    for(int i = 0; i < 10; i++){
        printf("%i\t|\t%i\t|\t%i\t|\t(posicao %i)\n", vetA[i], vetB[i], vetC[i], i);
    }

    return 0;
}

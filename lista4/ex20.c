#include <stdio.h>
#include <stdlib.h>


int main()
{
    // criando vetor
    int vet1[10] = {};
    //percorrendo o vetor solicitando um numero no intervalo de [0,50]
    for (int i = 0;i < 10; i++){
        do {
            printf("Digite um numero no intervalo [0,50] \n");
            scanf("%i", &vet1[i]);
            //caso não digite numeros no intervalo solicitado
            if(vet1[i] < 0 || vet1[i] > 50){
                printf("Digite novamente\n");
            }
         // forçando a repetição do numero, caso não for digitado no intervalo solicitado.
        }while(vet1[i] < 0 || vet1[i] > 50);
    }
    int contadora = 0;
    // realizando a contagem dos numeros impares
    for(int i = 0; i < 10; i++){
        if(vet1[i] %2 != 0){
            contadora++;
        }
    }
    int vet2[10] = {};
    int posicao = 0;
    // percorrendo o vetor1
    for(int i = 0; i < 10; i++){
        // caso for impar
        if(vet1[i] % 2 != 0){
            //colocando o numero do vetor 1 no vetor 2
            vet2[posicao] = vet1[i];
            posicao++;
        }
    }
    //imprimindo os vetores organizadamente
    printf("Vetores: \nvet1\t|\tvet2\n");
    for(int i = 0; i < 10; i++){
        if(vet2[i] == 0){
            printf("%i\t|\n",vet1[i]);
        }else{
            printf("%i\t|\t%i \n",vet1[i] ,vet2[i]);

        }
    }
    return 0;
}

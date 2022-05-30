#include <stdio.h>
#include <stdlib.h>

int main(){
    //criando os vetores
    float vet_altura[10] = {};
    int vet_numero[10] = {};
    //populando o vetor
    for(int i = 0; i < 10; i++){
        printf("Aluno %i\n", i + 1);
        printf("Digite um numero:\n");
        scanf("%i", &vet_numero[i]);
        printf("Digite uma altura:\n");
        scanf("%f", &vet_altura[i]);
    }
    //criando as variaveis auxiliares
    float maior_altura = vet_altura[0];
    int numero_maior = 0;
    float menor_altura = vet_altura[0] ;
    int numero_menor = 0;
    //percorendo e verificando o maior e menor
    for(int i = 0; i < 10; i++){
        if(vet_altura[i] >= maior_altura ){
            maior_altura = vet_altura[i];
            numero_maior = vet_numero[i];
        }
        if(vet_altura[i] <= menor_altura){
            menor_altura = vet_altura[i];
            numero_menor = vet_numero[i];
        }
    }
    // imprimindo as informa��es solicitadas
    printf("Aluno mais alto: \n");
    printf("numero: %i altura:%f \n",numero_maior, maior_altura);

    printf("Aluno mais baixo: \n");
    printf("numero: %i altura:%f\n ",numero_menor, menor_altura);
     return 0;
}

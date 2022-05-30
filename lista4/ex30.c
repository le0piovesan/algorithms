#include <stdio.h>
#include <stdlib.h>

int main (){
    int vet1[10], vet2[10], i, j, k, cont=0, a=0;
    int vet3[10], repetido;

    printf("Informe o primeiro vetor.\n");
    for(i=0;i<10;i++){
        printf("Vetor [%d]: ", i);
        scanf("%d", &vet1[i]);
    }

    for(i=0;i<10;i++){
        printf("%d, ", vet1[i]);
    }
    printf("\n\n");

    for(i=0;i<10;i++){
        printf("Segundo Vetor [%d]: ", i);
        scanf("%d", &vet2[i]);
    }
    for(i=0;i<10;i++){
        printf("%d, ", vet2[i]);
    }

    for(i=0, a=0; i<10; i++){
        for(j=0; j<10; j++){
            if(vet1[i]==vet2[j]){
                repetido = 0;
                for(k=0; k<a; k++){
                    if(vet1[i] == vet3[k]){
                        repetido = 1;
                    }
                }
                if(!repetido){
                    vet3[a]=vet1[i];
                    printf("\n%d %d", vet3[a], vet1[i]);
                    a++;
                }
            }
        }
    }
    /*
    for(i=0;i<a;i++)
        for(j=0;j<a;j++){
            if(vet3[i]==vet3[j]&&i!=j){
                vet3[j]=0; // OS NUMEROS REPETIDOS ATRIBUIR O VALOR DE 0, ENTRETANTO NA CONSIGO REMOVE-LOS.
            }
        }
    */

    printf("\n\nO vetor com a interseccao ficou da seguinte forma.\n\n");
    for(i=0;i<a;i++){
        printf("Vetor [%d]: %d\n", i, vet3[i]);
    }

    //system("pause");
    return 0;
}

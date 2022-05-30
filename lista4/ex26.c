#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define TAM 10


void leVetor(int v[], int tam);
void imprimeVetor(int v[], int tam);
double calculaDesvioPadrao(int v[], int tam);

int main() {
    setlocale(LC_ALL, "");
    int v[TAM];
    double desvio;

    leVetor(v, TAM);
    imprimeVetor(v, TAM);

    desvio = calculaDesvioPadrao(v, TAM);
    printf("O desvio padr�o �: %.5lf\n", desvio);

    return 0;
}


// ler os dados para um vetor
void leVetor(int v[], int tam) {

    printf("Insira os valores do vetor:\n");
    for(int i=0;i<tam;i++) {
        printf("vetor[%d]: ", i);
        scanf("%d", &v[i]);
    }
    printf("\n");
}

// imprime os valores do vetor na tela
void imprimeVetor(int v[], int tam) {

    printf("Vetor: ");
    for(int i=0;i<tam;i++) {
        printf("[%3d] ", v[i]);
    }
    printf("\n");
}

// calcula o desvio padr�o e retorna-o
double calculaDesvioPadrao(int v[], int tam) {

    double media=0, desvio=0;
    int i;

    // calcula a m�dia do vetor
    for (i=0;i<tam;i++) {
        media += v[i];
    }
    media = media / tam;

    // calculo o desvio padr�o
    for(i=0;i<tam;i++) {
        desvio += pow( (v[i] - media), 2);
    }
    desvio = desvio / (tam-1);
    desvio = sqrt(desvio);

    return desvio;
}

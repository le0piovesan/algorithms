#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double distancia = 0, tempo = 0, distancia_acumulada = 0, tempo_acumulado = 0, total = 0;

    while (distancia != -1 && tempo != -1)
    {
        scanf("%lf %lf", &distancia, &tempo);

        distancia_acumulada += distancia;
        tempo_acumulado += tempo;

        if (tempo == 0 && distancia == 0)
        {
            total = (distancia_acumulada / tempo_acumulado) * 3.6;

            printf("%.2lf km/h\n", total);
        }
    }
    return 0;
}
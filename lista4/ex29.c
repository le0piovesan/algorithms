#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()

{

setlocale(LC_ALL,"");

int v[6],v1[6],v2[6], i,contP = 0, contI = 0, sI=0, sP=0;

printf ("Digite 6 valores inteiros:\n\n");

for (i=0; i < 6; i++) {

	printf ("n�m[%d]: ", i + 1);

	scanf ("%d", &v[i]);

}

for(i=0; i<6; i++){

	if(v[i] % 2 == 0){
		v1[contP] = v[i];
		contP++;
		v1[sP] = sP=sP+v[i];
	}

	if(v[i] % 2 != 0){
		v2[contI] = v[i];
		contI++;
        v2[sI] = sI=sI+v[i];
	}
}

printf("\nOs n�meros pares s�o:\n", v1);

for(i=0; i<contP; i++){

printf("%i\n", v1[i]);

}

printf("\nOs n�meros �mpares s�o:\n");

for(i=0; i<contI; i++){

printf("%i\n", v2[i]);

}

printf("\nA soma dos n�meros pares �: %i\n", sP);

printf("\nA soma dos n�meros �mpares �: %i\n", sI);

getchar();
printf("\n\n");
system("pause");
return(0);
}


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{

setlocale(LC_ALL,"");

int v[10],v1[10],v2[10], i,contP = 0, contI = 0;

printf ("Digite 10 valores inteiros:\n\n");

for (i=0; i < 10; i++) {

	printf ("n�m[%d]: ", i + 1);

	scanf ("%d", &v[i]);

}

for(i=0; i<10; i++){

	if(v[i] % 2 == 0){

		v1[contP] = v[i];

		contP++;

	}

	if(v[i] % 2 != 0){

		v2[contI] = v[i];

		contI++;

	}

}

printf("\nOs n�meros pares s�o:\n");

for(i=0; i<contP; i++){

printf("%d\n", v1[i]);

}

printf("\nOs n�meros �mpares s�o:\n");

for(i=0; i<contI; i++){

printf("%d\n", v2[i]);

}

system("pause");

}


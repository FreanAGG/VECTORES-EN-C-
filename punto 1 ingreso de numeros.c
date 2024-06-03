/*Ingrese 20 valores enteros y muestrelos en pantalla en una linea, en el orden de ingreso, y en la linea siguiente, en
orden inverso al de ingreso.*/

#include <stdio.h>
#define N 20

int main ()
{
	int VEC[N], i;
	
	for (i = 0; i < N ; i++){
		printf("\n VEC[%d] = ", i);
		scanf("%d", &VEC[i]);
	}
	
	printf("\n\n");
	for(i= 0; i < N ; i++)
		printf("%7d", VEC[i]);
		
	printf("\n\n");
	for(i= N - 1 ; i >= 0 ; i--)
		printf("%7d", VEC[i]);
	
}
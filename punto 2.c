/*Ingrese 20 valores enteros y posteriormente un valor entero adicional al que llameres DIV.
Indique cuantos componentes del vector son divisibles por DIV.*/

#include <stdio.h>
#define N 20

int main()
{
	int VEC[N], i, div, son_divisibles = 0;
	
	for(i = 0; i < N; i++)
	{
		printf("\n VEC [%d] = ", i);
		scanf("%d", &VEC[i]);
	}
	
	printf("\n DIV = ");
	scanf("%d", &div);
	
	for (i = 0 ; i < N; i++ )
	{
		if (VEC[i] % div == 0){
			son_divisibles++;
		}
	}
	
	printf("\n%d COMPONENTES DEL VECTOR SON DIVISIBLES POR %d", son_divisibles, div);
}
/*Realizar una funcion que reciba un vector de enteros y su longitud, y retorne el promedio de sus valores*/

#include <stdio.h>

float PROM (int VEC[5]);

int main ()
{
	int VEC[5], i;
	
	for (i = 0; i < 5; i++)
	{
		printf("\nVEC [%d] = ", i);
		scanf("%d", &VEC[i]);
	}
	
	printf("\nPROMEDIO =  %.2f\n", PROM(VEC));
}

float PROM (int VEC[])
{
	int acum = 0, i;
	float prom;
	
	for ( i = 0 ; i  < 5 ; i++)
	{
		acum = acum + VEC[i];
	}
	
	prom = (float)acum / 5;
	
	return prom;
}
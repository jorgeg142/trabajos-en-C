#include <stdio.h>
void main()
{
	int f,c,x,z,suma;
	printf("ingrese filas\n");
	scanf ("%i",&f);
	printf("ingrese columnas\n");
	scanf ("%i",&c);
	int mat[f][c];
	/*----------------------------------*/
	for (x = 1; x <=f; x++)
	{
		for (z = 1; z <= c; z++)
		{
			printf("ingrese numero para la matriz[%i][%i]: \n",x,z);
			scanf ("%i",&mat[x][z]);
		}
	}
	for (z = 3; z <= c-2; z++)
		{
			suma=suma+mat[3][z];
		}
	for (x = 4; x <=f-3; x++)
	{
		suma=suma+mat[x][3];
		suma=suma+mat[x][c-2];
	}
	for (z = 3; z <= c-2; z++)
		{
			suma=suma+mat[f-2][z];
		}
		printf("la suma es: %i",suma);
}

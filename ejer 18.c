#include <stdio.h>
void main()
{
	int f,c,x,z,i,aux,b,mul;
	printf("ingrese filas\n");
	scanf ("%i",&f);
	printf("ingrese columnas\n");
	scanf ("%i",&c);
	int mat[f][c];
	mul=f*c;
	int vec[mul];
	/*----------------------------------*/
	for (x = 1; x <=f; x++)
	{
		for (z = 1; z <= c; z++)
		{
			printf("ingrese numero para la matriz[%i][%i]: \n",x,z);
			scanf ("%i",&mat[x][z]);
		}
	}
	/*----------------------------------*/

	for (x = 1; x <= f; ++x)
	{
		for (z = 1; z <= c; ++z)
		{
			i=i+1;
			vec[i]=mat[x][z];
			/*printf ("%i-", vec[i]);*/
	
		}

	}
	printf("\n");
	/*----------------------------------*/
	b=1;
	while (b>0)
	{
		b=0;
		for (x= 1; x <= mul-1; x++)
		{
			if (vec[x+1]<vec[x])
			{
				aux=vec[x+1];
				vec[x+1]=vec[x];
				vec[x]=aux;
				b=1;

			}
		
		}
	}
	/*----------------------------------*/
	int l;
	for (x=1;x<=f;x++)
	{
		for (z=1;z<=c;z++)
		{
			l++;
			mat[z][x]=vec[l];
		}
	}
	/*----------------------------------*/
	for (x=1;x<=f;x++)
	{
		for (z=1;z<=c;z++)
		{
			printf ("|%i|",mat[x][z]);
		}
		printf("\n");
	}
}


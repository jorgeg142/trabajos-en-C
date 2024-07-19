#include <stdio.h>
int proyectocero();
	int mat[6][6];
	int num1,num2;
	int c;
	int f;
	int z,x;
void main()
{
	printf("ingrese el primer numero\n");
	scanf ("%d",&num1);
	printf("ingrese el segundo numero\n");
	scanf ("%d",&num2);
	if (num1>6){
		while (num1>=6){
			printf("ingrese numero mayor a cero y menor a 7\n");
			scanf ("%d",&num2);
		}
	}
	if (num2>6){
		while (num2>=6){
			printf("ingrese numero mayor a cero y menor a 7\n");
			scanf ("%d",&num2);
		}
	}
	proyectocero();
}
	int proyectocero ()
	{
		for(f=0;f<6;f++){
	for(c=0;c<6;c++){
			mat[f][c]=1;
		}
	}
	/*---------------------------------*/
		x=num1;
		for (z=0;z<6;z++)
		{
			mat[x][z]=0;
		}
		z=num2;
		for (x=0;x<6;x++)
		{
			mat[x][z]=0;
		}
		/*---------------------------------*/
	for(f=0;f<6;f++){
			for(c=0;c<6;c++){
			printf("| %d |",mat[f][c]);							
		}
	printf("\n");
}
		return ;
	}

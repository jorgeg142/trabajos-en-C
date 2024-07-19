#include<stdlib.h>
#include<stdio.h>
void main()
{
  int x,q,z,y,f,c,i,suma;
  printf("introduzca fila\n");
  scanf("%i",&f);
  printf("introduzca culumna\n");
  scanf("%i",&c);
  /*----------------------------*/
  while(f%2!=0){
  	printf("deben ser pares las filas\n");
	  scanf("%i",&f);
  }
  while(c%2!=0)
  {
  	printf("deben ser pares las columnas\n");
	  scanf("%i",&c);
  }
    /*----------------------------*/
  int censo[f][c];
  for(x=1;x<=f;x++)
  {
  	for(z=1;z<=c;z++)
	  {
  	    printf("ingrese numero para la censo[%i][%i]: \n",x,z);
			scanf ("%i",&censo[x][z]);
	  }
  }
  for (x=1;x<=f;x++)
		{
			
			for (z=1;z<=c;z++)
			{
					printf ("|%i|",censo[x][z]);
			}
			printf("\n");
		}
    /*----------------------------*/
  q=f/2;
  y=c/2;
  int resumen[q][y];
  suma=0;
  int vec[q*y];
  int cont=0;
i=1;
int n=2;
int g=q*y;
int p=1;
/*----------------------------*/
while(p<=g)
{
	  if (cont%2==0 && n==c)
	  {
	  	n=2;
	  	i=1;
	  }
	cont++;
  	for(z=i;z<=n;z++)
	  {
  		suma=suma+censo[cont][z];	
  		if(z==n && cont%2==0)
		  {
		  	vec[p]=suma;
  			p++;
  			suma=0;
		  }
	}
		if (cont%2==0 && n<c)
  	  {
  		n=n+2;
		cont=0;
		i++;
		if (i%2!=0)	
		{
			i++;
		}
	  }
}
/*while(p<2)
{
cont++;
for(z=2;z<=4;z++)
	  {
  		suma=suma+censo[cont][z];	
  		if(z==n && cont%2==0)
		  {
		  	vec[p]=suma;
  			p++;
  			suma=0;
		  }
	}
}*/
printf("\n");
for (x=1;x<1;x++)
{
	printf("|%it|",vec[x]);
}
/*----------------------------*/
  p=0;
  printf("\n");
  for(x=1;x<=q;x++)
  {
  	for(z=1;z<=y;z++)
	  {
	  	p++;
  		resumen[x][z]=vec[p];
  			printf("|%i|",resumen[x][z]);
	  	}
	printf("\n"); 
  }
}

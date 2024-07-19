#include<stdio.h>
#include <time.h>
#include <stdlib.h>
int p,o,f,c,b,x,z,q,k;

void main()
{
	printf("ingrese fila\n");
	scanf ("%i",&f);
	printf("ingrese columnas\n");
	scanf ("%i",&c);
	int mat[f][c];
	/*----------------------------------*/
srand(time(NULL));

for (x = 1; x <= f; ++x)
	{
		for (z = 1; z <= c; ++z)
		{
			mat[x][z]=1;
		}

	}
q=f-1;
k=c-1;
o=1;
p=1;
	while (mat[f][c]==1)
	{
	
		if (mat[1][1]==1)
		{
			mat[o][p]=0;
			b=rand()%2+1;
			if (b==1)
			{
			o=o+1;
			mat[o][p]=0;
			
			}else{
				
			p=p+1;
			mat[o][p]=0;
			}
		}
		/*----------------------------------*/
		if (p==1 && o>1 && o<=q)
		{
			b=rand()%2+1;
			if (b==1)
			{
				p=p+1;
				mat[o][p]=0;
			}
			if (b==2){
				o=o+1;
				mat[o][p]=0;
			}
		}
		if (p>1 && p<=k && o==1)
		{
			b=rand()%2+1;
			if (b==1)
			{
				p=p+1;
				mat[o][p]=0;
			}
			if (b==2)
			{
				o=o+1;
				mat[o][p]=0;
			}
		}
		/*----------------------------------*/
		if (o==1 && p==c)
		{
			o=o+1;
			mat[o][p]=0;
		}
		/*----------------------------------*/
		if (o>1 && o<=q && p==c)
		{
			o=o+1;
			mat[o][p]=0;
		}
		/*----------------------------------*/
		if(o==f && p==1)
		{
			p=p+1;
			mat[o][p]=0;
		}
		if (p>1 && p<=k && o==f)
		{
			b=rand()%2+1;
			if (b==1)
			{
				p=p+1;
				mat[o][p]=0;
			}else{
				o=o-1;
				mat[o][p]=0;
			}
		}
		/*----------------------------------*/
		if (o>1 && o<=q && p>1 && p<=k)
		{
			b=rand()%3+1;
			switch(b)
			{
				case 1:
					p=p+1;
					mat[o][p]=0;
				break;
				case 2:
					o=o-1;
					mat[o][p]=0;
				break;
				case 3:
					o=o+1;
					mat[o][p]=0;
				break;
				default:
					printf("ERROR f1\n");
				break;	
			}	
		}
	}
	printf ("o=%i\n",o);
	printf ("p=%i\n",p);
	for (x=1;x<=f;x++)
	{
		for (z=1;z<=c;z++)
		{
			printf ("|%i|",mat[x][z]);
		}
		printf("\n");
	}
	
}


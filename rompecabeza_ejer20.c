#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int mat[4][4];
int c,p,g;
int y,x,z,aux;
void main ()
{
	int e;
	srand(time(NULL));
	for (x= 1; x<=4; x++)
	{
		for (z= 1; z<=4; z++)
		{
				e=e+1;
				mat[x][z]=e;
				if (e==16)
				{
					mat[x][z]=0;
				}
		}
	}
/*----------------------------------*/

	for (g=1; g<20; g++)
	{
		for (x=1; x<=4; x++)
		{
			
			for (z=1; z<=4; z++)
			{
				
				if (mat[x][z]==0)
				{
					p=x;
					y=z;
							
				}
			}
		}
	
/*----------------------------------*/
		if (p==4 && y==4)
		{
			c=rand()%2+1;
			if (c==1)
			{
				intercambio1();
			}
			if (c==2)
			{
				intercambio2();
			}
		}
		if (p>1 && p<4 && y<4 && y>1)
		{
			c=rand()%4+1;
			switch(c)
			{
				case 4:
					intercambio4();
				break;
				case 3:
					intercambio3();
				break;
				case 2:
					intercambio2();
				break;
				case 1:
					intercambio1();
				break;
				default:
					printf("ERROR if1\n");
				break;	
			}
		}
		if (p==4 && y>1 && y<4)
		{
			c=rand()%3+1;
			switch(c)
			{
				case 3:
					intercambio3();
				break;
				case 2:
					intercambio2();
				break;
				case 1:
					intercambio1();
				break;
				default:
					printf("ERROR if2\n");
				break;	
			}
		}
		if (p==1 && y>1 && y<4)
		{
			c=rand()%3+1;
			switch(c)
			{
				case 3:
					intercambio3();
				break;
				case 2:
					intercambio4();
				break;
				case 1:
					intercambio1();
				break;
				default:
					printf("ERROR if3\n");
				break;	
			}
		}
		if (p>1 && p<4 && y==1)
		{
			c=rand()%3+1;
			switch(c)
			{
				case 3:
					intercambio2();
				break;
				case 2:
					intercambio3();
				break;
				case 1:
					intercambio4();
				break;
				default:
					printf("ERRORf4\n");
				break;	
			}
		}
		if (p>1 && p<4 && y==4)
		{
			c=rand()%3+1;
			switch(c)
			{
				case 3:
					intercambio4();
				break;
				case 2:
					intercambio2();
				break;
				case 1:
					intercambio1();
				break;
				default:
					printf("ERRORf5\n");
				break;	
			}
		}
		if (p==1 && y==1)
		{
			c=rand()%2+1;
			switch(c)
			{
				case 2:
					intercambio3();
				break;
				case 1:
					intercambio4();
				break;
				default:
					printf("ERRORf6\n");
				break;	
			}
		}
		if (p==1 && y==4)
		{
			c=rand()%2+1;
			switch(c)
			{
				case 2:
					intercambio1();
				break;
				case 1:
					intercambio4();
				break;
				default:
					printf("ERRORf7\n");
				break;	
			}
		}
		if (p==4 && y==1)
		{
			c=rand()%2+1;
			switch(c)
			{
				case 2:
					intercambio3();
				break;
				case 1:
					intercambio2();
				break;
				default:
					printf("ERRORf8\n");
				break;	
			}
		}
}

/*----------------------------------*/
	for (x=1;x<=4;x++)
	{
		for (z=1;z<=4;z++)
		{
				printf ("|%i|",mat[x][z]);
			}
	printf("\n");
	}
	jugar();
}
/*----------------------------------*/
/*----------------------------------*/
//termino aqui
/*----------------------------------*/
/*----------------------------------*/
void jugar()
{
	int g=0;
	int f,contador;
	printf ("4=izquierda,8=arriba,6=derecha,2=abajo\n");
	while(g<16)
	{
		for (x=1; x<=4; x++)
		{
			
			for (z=1; z<=4; z++)
			{
				
				if (mat[x][z]==0)
				{
					p=x;
					y=z;
							
				}
			}
		}
		
		printf("ingrese numero\n");
		scanf ("%i",&f);
		switch(f)
			{
				case 4:
					intercambio1();
				break;
				case 8:
					intercambio2();
				break;
				case 6:
					intercambio3();
				break;
				case 2:
					intercambio4();
				break;
				default:
					printf("ERROR en jugar\n");
				break;	
			}
		for (x=1;x<=4;x++)
		{
			for (z=1;z<=4;z++)
			{
					printf ("|%i|",mat[x][z]);
			}
			printf("\n");
		}
	
	/*----------------------------------*/

		/*----------------------------------*/
		contador=0;
		g=0;
		for (x=1;x<=4;x++)
		{
			for (z=1;z<=4;z++)
			{
				contador=contador+1;
				if (mat[x][z]==contador)
				{
					g=g+1;
				}
				if (mat[4][4]==0)
				{
						g=g+1;
				}
				if (mat[x][z]!=contador)
				{
					g=g-1;
				}
			}
		}
		if (g>=15)
		{
			printf ("\n felicidades termino el rompiomicabeza");
		}
	}
}


/*----------------------------------*/
	void intercambio1()
	{
		
		aux=mat[p][y-1];
		mat[p][y-1]=mat[p][y];
		mat[p][y]=aux;
	}
	void intercambio2()
	{
		
		aux=mat[p-1][y];
		mat[p-1][y]=mat[p][y];
		mat[p][y]=aux;
	}
	void intercambio3()
	{
		
		aux=mat[p][y+1];
		mat[p][y+1]=mat[p][y];
		mat[p][y]=aux;
	}
	void intercambio4()
	{
		
		aux=mat[p+1][y];
		mat[p+1][y]=mat[p][y];
		mat[p][y]=aux;
	}

#include <stdio.h>

void decreciente (int *num)
{
	int i,j;
	int aux;
	
	printf ("vector original:\n");
	for (i=0; i<8; i++)
	{
		printf ("%d\n",num[i]);
	}
	
	for (i=0; i<8-1; i++) 
	{
		for (j=0; j<8-i-1; j++) 
		{
			if (num[j]<num[j+1]) 
			{
				aux=num[j];
				num[j]=num[j+1];
				num[j+1]=aux;
			}
		}
	}
	printf("vector decreciente:\n");
	for (i=0; i<8; i++) {
		printf("%d\n",num[i]);
	}
}

int main() {
	
	int num[8];
	int i=0;
	
	printf ("ingrese numeros:\n");
	for (i=0; i<8; i++)
	{
		scanf ("%d",&num[i]);
	}

	decreciente (num);
	
	return 0;
}


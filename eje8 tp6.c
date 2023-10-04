#include <stdio.h>

void orden (int *num)
{
	int i,j;
	int aux;
		
	for (i=0; i<7-1; i++)
	{
		for (j=0; j<7-i-1; j++) 
		{
			if (num[j]>num[j+1]) 
			{
				aux=num[j];
				num[j]=num[j+1];
				num[j+1]=aux;
			}
		}
		
	}
	printf("ordenado de menor a mayor:\n");
	for (i=0; i<7; i++) {
		printf("%d\n",num[i]);
	}
}

int main() {
	
	int num[7];
	int i=0;
	
	printf ("ingrese numeros:\n");
	for (i=0; i<7; i++)
	{
		scanf ("%d",&num[i]);
	}
	
	orden (num);

	return 0;
}


#include <stdio.h>
#include <stdlib.h>

void numeros (int *num)
{
	int pares[20];
	int impares[20];
	int i;
	int auxi=0;
	int auxp=0;
	
	for (i=0; i<20; i++)
	{
		if (num[i]%2==0)
		{
			pares[auxp]=num[i];
			auxp++;
		}
		else
		{
			impares[auxi]=num[i];
			auxi++;
			
		}
		
	}
	printf ("los numeros pares son:\n");
	for (i=0; i<auxp; i++)
	{
		printf ("%d\n",pares[i]);
	}
	
	printf ("los numeros impares son:\n");
	for (i=0; i<auxi; i++)
	{
		printf ("%d\n",impares[i]);
	}
	
}

int main() {
	
	int num[20];
	int i;
	
	printf ("ingrese numeros:\n");
	for (i=0; i<20; i++)
	{
		scanf ("%d",&num[i]);
		if (num[i]==0)
		{
			break;
		}
	}
	
	system("cls");
	
	numeros (num);
	
	return 0;
}


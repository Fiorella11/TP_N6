#include <stdio.h>
#include <stdlib.h>

void mayor (int *num)
{
	int numMayor=0;
	
	for (int i=0; i<7; i++)
	{
		if (num[i]>numMayor)
		{
			numMayor=num[i];
		}
	}
	printf ("el numero mayor es: %d\n",numMayor);
	
}

void orden(int *num)
{
	int asc=0;
	int desc=0;
	
	for (int i=1; i<=7; i++)
	{
		if (num[i]<num[i-1])
		{
			desc++;
		}
		else 
		{
			if (num[i]>num[i-1])
			{
				asc++;
			}
		}
	}
	
	if (asc==6)
	{
		printf ("la lista es ASCENDENTE\n");
	}
	else
	{
		
		if (desc==6)
		{
			printf ("la lista es DESCENDENTE\n");
		}
		
		else
		{
			printf ("la lista es DESORDENADA\n");
		}
		
	}
}

int main() {
	
	int num[7];
	int i;
	
	printf ("ingrese los numeros:\n");
	for (i=0; i<7; i++)
	{
		scanf ("%d",&num[i]);
		
		while (num[i]<0)
		{
			printf ("numero invalido, ingrese otro:\n");
			scanf ("%d",&num[i]);
		}
	}
	
	mayor (num);
	orden (num);
	
	return 0;
}

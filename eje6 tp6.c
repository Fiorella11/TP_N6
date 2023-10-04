#include <stdio.h>

void mayores (int *num)
{
	int mayor=0;
	int i;
	
	for (i=0; i<10; i++)
	{
		if (num[i]>mayor)
		{
		mayor=num[i];	
		}
	}
	
	printf ("el numero mayor es: %d\n",mayor);	
}
void menores (int *num)
{
	int menor;
	int i;
	
	for (i=0; i<10; i++)
	{
		if (num[i]<menor)
		{
			menor=num[i];	
		}
	}
	
	printf ("el numero menor es: %d\n",menor);	
}

int main() {
	
	int num[10];
	int i=0;
	
	printf ("ingrese numeros:\n");
	for (i=0; i<10; i++)
	{
		scanf ("%d",&num[i]);
	}
	
	mayores (num);
	menores (num);
	
	return 0;
}


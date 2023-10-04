#include <stdio.h>
#include <stdlib.h>

int mostrar (int *elementos)
{
	int j=0;
	
	printf ("elementos:\n");
	for (j=0; j<6; j++)
	{
		printf ("%d\n",elementos[j]);
	}
	
}

int main() {
	
	int elementos[6];
	int i=0;
	
	printf ("ingrese elementos:\n");
	for (i=0; i<6; i++)
	{
		
	
	printf ("numero: ",i+1);
	scanf ("%d",&elementos[i]);
	
//	scanf ("%d",&elementos);
	}
	
	mostrar (elementos);
	
	return 0;
}

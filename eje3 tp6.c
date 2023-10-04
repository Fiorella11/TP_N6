#include <stdio.h>
#include <stdlib.h>

void gastos (int *compras)
{
	int gastoMayor=0;
	int i=0;
	
	for (i=0; i<10; i++)
	{
		if (compras[i]>gastoMayor)
		{
			gastoMayor=compras[i];
		}
	}
	printf ("el gasto mayor es: %d\n",gastoMayor);	
}

void monto (int *compras)
{
	
	int precioFinal=0;
	int i=0;
	
	for (i=0; i<10; i++)
	{
	precioFinal+=compras[i];
	}
	printf ("el precio final es: %d\n",precioFinal);	
	
}


int main() {
	
	int compras[10];
	int i;
	
	printf ("ingrese sus gastos:\n");
	for (i=0; i<10; i++)
	{
	scanf ("%d",&compras[i]);
	}
	
	gastos (compras);
	monto (compras);
	
	return 0;
}


#include <stdio.h>

void puestos (int *tiempo)
{
	int i,j;
	int aux;
	
	for (i=0; i<10-1; i++) 
	{
		for (j=0; j<10-i-1; j++) 
		{
			if (tiempo[j] > tiempo[j+1]) 
			{
				aux=tiempo[j];
				tiempo[j]=tiempo[j+1];
				tiempo[j+1]=aux;
			}
		}
		
	}
	
	printf ("el primer ganador corrio: %d minutos\n",tiempo[0]);
	printf ("el segundo ganador corrio: %d minutos\n",tiempo[1]);
	printf ("el tercer ganador corrio: %d minutos\n",tiempo[2]);
	
}


int main() {
	
	int tiempo[10];
	int i;
	float suma,medio=0;
	
	printf ("ingrese tiempo de los corredores:\n");
	for (i=0; i<10; i++)
	{
		printf ("corredor %d: ",i+1);
		scanf ("%d",&tiempo[i]);
		suma=suma+tiempo[i];
		medio=suma/10;
	}
	
	printf ("el tiempo medio es: %.2f\n",medio);
	
	puestos (tiempo);
	
	return 0;
}


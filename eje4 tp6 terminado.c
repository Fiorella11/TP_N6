#include <stdio.h>

void numeros (int *num,int num1, int num2)
{
	int contador=0;
	int i=0;
		
	printf("los números %d y %d pertenecen a la secuencia en las posiciones:\n", num1, num2);
	for (i=0; i<8; i++)
	{
	if (num[i]==num1 || num[i]==num2)
	{
		printf("Posición: %d\n Valor:\n %d\n",i,num[i]);
		contador++;
	}
	}
	if (contador==0) {
		printf("Los números no se encontraron en la secuencia.\n");
	} else {
		printf("Se encontraron %d veces en la secuencia.\n", contador);
	}
	
}


int main() {
	
	int num[8];
	int num1,num2;
	int i,j;
	
	printf ("ingrese numeros:\n");
	for (i=0; i<8; i++)
	{
		printf ("numero %d: ",i+1);
		scanf ("%d",&num[i]);
	}
	
	printf ("ingrese numeros adicionales:\n");
	printf ("numero adicional: ");
	scanf ("%d",&num1);
	printf ("numero adicional: ");
	scanf ("%d",&num2);

	numeros (num,num1,num2);
	return 0;
}


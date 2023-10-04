#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void mayusculas (char *ape)
{
	int dif='a' - 'A';
	
	if (ape [0]>='a' && ape[0]<='z')
	{
		ape [0]=ape [0]-dif;
	}
	else
	{
		ape [0]=ape [0];
	}
	
}


int main() {
	char ape [50];
	float nota=0;
	int i,k,acu=0,prom=0,acuto=0,promto=0;
	
	for (i=0;i<3;i++)
	{
		printf ("ingrese el apellido del alumno %d: ",i+1);
		scanf ("%s", &ape);
		for (k=0;k<5;k++)
		{
			printf ("ingrese nota %d:\n",k+1);
			scanf ("%f", &nota);
			acu=acu+nota;
			acuto=acuto+nota;
		}
		
		prom=acu/5;
		printf ("el promedio de las notas de %s es: %d\n",ape,prom);
		acu=0;
	}
	
	promto=acuto/15;
	printf ("el promedio de las notas totales es: %d\n",promto);
	
	
	mayusculas (ape);
	
	return 0;
}

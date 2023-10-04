#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverso (char *cadena)
{
	int i, dif= 'a' - 'A', tam;
	tam=strlen(cadena);
	for (i=0;i<tam; i++) {
		if (cadena[i]>='a' && cadena [i]<='z')
		{
			cadena [i]=cadena [i]-dif;
		}
		else
		{
			if (cadena[i]>='A' && cadena [i] <= 'Z')
			{
				cadena [i]=cadena [i]+dif;
			}
		}
	}
	printf ("su texto inverso es: %s\n", cadena);
	
}


int main() {
	
	char cadena [50];
	
	printf ("ingrese un texto\n"); 
	gets (cadena);
	
	inverso (cadena);
	
	return 0;
	
}

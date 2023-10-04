#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void invertido (char *cadena)
{
	char i,j,longi;
	char longitud;
	char temporal;

	longitud=strlen(cadena);
	j=longitud-1;
	
	
	for (i=0; i<longitud/2; i++)
	{
		temporal=cadena[i];
		cadena[i]=cadena[j];
		cadena[j]=temporal;
		j--;
	}
	
	printf("el texto invertido es: %s\n", cadena);
}



int main(){
	
	char cadena[50];
	printf("ingrese un texto:\n");
	gets(cadena);
	
	
	
	invertido (cadena);
	
	return 0;
}

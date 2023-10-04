#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void palindromo (char *cadena)
{
	int i, longitud;
	
	longitud = strlen(cadena);
		
		for (i=0;i<(longitud/2);i++)
	{
			if(cadena[i]==cadena[(longitud-1)])
			{
				printf ("es palindromo\n");
				break;
			}
			else
			   for (i=0;i<((longitud/2)-1);i++)
			{
				   printf ("no es palindromo\n");
			}
	}
}

int main() {
	char cadena[50];
	printf ("ingrese un texto:\n");
	gets (cadena);
	
	palindromo (cadena);
	
		return 0;
}

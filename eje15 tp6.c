#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void vocales (char *cadena)
{
	int longi=0,k=0,a=0,e=0,i=0,o=0,u=0;
	longi = strlen(cadena);
	
	for (k=0;k<longi;k++){
		if (cadena[k]=='a')
		{
			a=a+1;
		}
		else if (cadena[k]=='e')
		{
			e=e+1;
		}
		else if (cadena[k]=='i')
		{
			i=i+1;
		}
		else if (cadena[k]=='o')
		{
			o=o+1;
		}
		else if (cadena[k]=='u')
		{
			u=u+1;
		}
	}
	printf ("la letra a se repite: %d\n",a);
	printf ("la letra e se repite: %d\n",e);
	printf ("la letra i se repite: %d\n",i);
	printf ("la letra o se repite: %d\n",o);
	printf ("la letra u se repite: %d\n",u);
	
	
}


int main() {
	char cadena [80];
	
	printf ("ingrese un texto:\n");
	gets (cadena);
	
	vocales (cadena);
	
	return 0;
}

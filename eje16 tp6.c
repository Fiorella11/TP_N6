#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

void antiguo (char *nombre,int dia,int mes,int year,float salario)
{
	
	int minDia=32, minMes=13, minYear=3000;
	char minNombre[50];
	float minSalario=0;
	
	for(int i = 0; i < 3; i++)
	{
		if(year < minYear)
		{
			//printf("El año actual '%d' es más pequeño que el año guardado '%d'\n",year, minYear);
			
			minYear = year;
			minMes = mes;
			minDia = dia;
			minSalario=salario;
			strcpy(minNombre,nombre);
		}
		else if(year == minYear)
		{
			// verificando mes
			//printf("El año actual '%d' es igual que el año guardado '%d'\n",mes,minMes);
			
			if(mes < minMes)
			{
				//printf("El mes actual '%d' es más pequeno que el mes guardado '%d'\n",mes, minMes);
				
				minMes = mes;
				strcpy(minNombre,nombre);
				minSalario=salario;
				
			}
		}
		
		
		else if(mes == minMes)
		{
			// verificando dia
			//printf("El dia actual '%d' es igual que el dia guardado'%d'\n",dia,minDia);
			
			if (dia < minDia)
			{
				//printf("El dia actual '%d' es mas pequeno que el dia guardado '%d'\n",dia, minDia);
				
				minDia = dia;
				strcpy(minNombre,nombre);
				minSalario=salario;
			}
		}
		else if (dia == minDia)
		{
			//printf("Las fechas son iguales");
		}
		
		else
		{
			//printf("El año actual '%d' es mayor que el año guardado '%d'\n",year,minYear);
		}
	}
	
	printf("El empleado con fecha de ingreso mas antiguo es:\n");
	printf("Nombre: %s\nDia: %d\nMes: %d\nYear: %d\nsalario: %.1f\n" ,minNombre,minDia, minMes, minYear, minSalario);
	
	
}


int main() 
{
	char nombre[50];
	int dia, mes, year;
	float salario;
	
	for(int i = 0; i < 3; i++)
	{
		printf("Ingrese el nombre de empleado %d: ",i+1);
		scanf("%s",nombre);
		printf("Ingrese dia de ingreso\n");
		scanf("%d",&dia);
		printf("Ingrese mes de ingreso\n");
		scanf("%d",&mes);
		printf("Ingrese year de ingreso\n");
		scanf("%d",&year);
		printf("Ingrese salario\n");
		scanf("%f",&salario);
		
		
	}
	
	antiguo (nombre,dia, mes, year,salario);
	
	return 0;
}

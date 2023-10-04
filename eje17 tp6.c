#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void modificacion(char *nombre1,char *nombre2,char *nombre3,int dia1,int mes1,int year1,int year2,int mes2,int dia2,int year3,int mes3,int dia3)
{
	int year4,mes4,dia4;
	char modif [10]={' '};
	char nombremodif[30]={' '};
	char si[20]="si";
	int eleccion=0;
	
	printf ("quiere modificar alguna fecha?\n");
	scanf("%s",modif);
	eleccion=strcmp(modif,si);
	
	if (eleccion == 0)
	{
		printf ("ingrese el nombre de la fecha a modificar:\n");
		scanf ("%s", nombremodif);
		printf ("ingrese el year nuevo\n");
		scanf ("%d",&year4);
		year1=year4;
		printf ("ingrese el mes nuevo\n");
		scanf ("%d",&mes4);
		mes1=mes4;
		printf ("ingrese el dia nuevo\n");
		scanf ("%d",&dia4);
		dia1=dia4;
	}
	else
	{
		if (nombremodif==nombre2)
		{
			printf ("ingrese el year nuevo\n");
			scanf ("%d",&year4);
			year2=year4;
			printf ("ingrese el mes nuevo\n");
			scanf ("%d",&mes4);
			mes2=mes4;
			printf ("ingrese el dia nuevo\n");
			scanf ("%d",&dia4);
			dia2=dia4;
		}
		else
		{
			if (nombremodif==nombre3)
			{
				printf ("ingrese el year nuevo\n");
				scanf ("%d",&year4);
				year3=year4;
				printf ("ingrese el mes nuevo\n");
				scanf ("%d",&mes4);
				mes3=mes4;
				printf ("ingrese el dia nuevo\n");
				scanf ("%d",&dia4);
				dia3=dia4;
			}
		}
	}
}

void calcularEdad (int diaActual,int mesActual,int anioActual,int dia1,int mes1,int year1,int year2,int mes2,int dia2,int year3,int mes3,int dia3,char *nombre1,char *nombre2,char *nombre3)
{
	int edad1,edad2,edad3;
	
	if(anioActual >= year1)
	{
		if(mesActual > mes1)
		{
			edad1 = anioActual - year1;
		}
		else if(mesActual == mes1)
		{
			if(diaActual >= dia1)
			{
				edad1 = anioActual - year1;
			}
			else
			{
				edad1 = anioActual - year1 - 1;
			}
		}
		else
		{
			edad1 = anioActual - year1 -1;
		}
		
		printf ("la edad de persona %s es:%d\n",nombre1,edad1);
	}
	
	if(anioActual >= year2)
	{
		if(mesActual > mes2)
		{
			edad2 = anioActual - year2;
		}
		else if(mesActual == mes2)
		{
			if(diaActual >= dia2)
			{
				edad2 = anioActual - year2;
			}
			else
			{
				edad2 = anioActual - year2 - 1;
			}
		}
		else
		{
			edad2 = anioActual - year2 -1;
		}
		
		printf ("la edad de persona %s es:%d\n",nombre2,edad2);
	}
	
	if(anioActual >= year3)
	{
		if(mesActual > mes3)
		{
			edad3 = anioActual - year3;
		}
		else if(mesActual == mes3)
		{
			if(diaActual >= dia3)
			{
				edad3 = anioActual - year3;
			}
			else
			{
				edad3 = anioActual - year3 - 1;
			}
		}
		else
		{
			edad3 = anioActual - year3 -1;
		}
		printf ("la edad de persona %s es:%d\n",nombre3,edad3);
	}
}

int main()
{
	int edad1,edad2,edad3;
	int diaActual = 3;
	int mesActual = 10;
	int anioActual = 2023;
	char nombre1[30]={' '};
	char nombre2[30]={' '};
	char nombre3[30]={' '};
	int dia1,mes1,year1,year2,mes2,dia2,year3,mes3,dia3;
	
	
	printf ("Ingrese el nombre 1: ");
	scanf ("%s", nombre1);
	printf ("Ingrese year de nacimiento:\n");
	scanf ("%d", &year1);
	
	while (year1>2023)
	{
		printf ("year invalido,ingrese otro year\n");
		scanf ("%d", &year1);
	}
	
	printf ("Ingrese mes de nacimiento:\n");
	scanf ("%d", &mes1);
	
	while (mes1>10 && year1==2023 || mes1>12)
	{
		printf ("mes invalido,ingrese otro mes\n");
		scanf ("%d", &mes1);
	}
	
	printf ("Ingrese dia de nacimiento:\n");
	scanf ("%d", &dia1);
	
	if (mes1==10 && year1==2023 && dia1>3)
	{
		printf ("dia invalido,ingrese otro dia\n");
		scanf ("%d", &dia1);
	}
	else
	{
		switch(mes1)
		{
		case 2: if (year1%4==0)
		{
			while(dia1>29)
			{
				printf ("dia invalido,vuelva a ingresar el dia\n");
				scanf ("%d",&dia1);
			}
		}
		else
		{
			while (dia1>28)
			{
				printf ("dia invalido,vuelva a ingresar el dia\n");
				scanf ("%d",&dia1);
			}
		}
		break;
		case 4:
		case 6:
		case 9:
		case 11:
			while (dia1>30)
			{
				printf ("dia invalido,vuelva a ingresar el dia\n");
				scanf ("%d",&dia1);
			}
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			while (dia1>31)
			{
				printf ("dia invalido,vuelva a ingresar el dia\n");
				scanf ("%d",&dia1);
			}
			break;
		}
	}
	printf ("Ingrese el nombre 2: ");
	scanf ("%s", nombre2);
	printf ("Ingrese year de nacimiento:\n");
	scanf ("%d", &year2);
	
	while (year2>2023)
	{
		printf ("year invalido,ingrese otro year\n");
		scanf ("%d", &year2);
	}
	
	printf ("Ingrese mes de nacimiento:\n");
	scanf ("%d", &mes2);
	
	while(mes2>10 && year2==2023 || mes2>12) 
	{
		printf ("mes invalido, ingrese otro mes\n");
		scanf ("%d", & mes2);
	}
	
	printf("ingrese el dia de nacimiento:\n");
	scanf("%d",&dia2);
	
	while (year2==2023 && mes2==10 && dia2>28)
	{
		printf ("dia invalido,ingrese otro mes\n");
		scanf ("%d", & dia2);
	}
	
	switch(mes2)
	{
	case 2: if (year2%4==0)
	{
		while(dia2>29)
		{
			printf ("dia invalido,vuelva a ingresar el dia\n");
			scanf ("%d",&dia2);
		}
	}
	else
	{
		while (dia2>28)
		{
			printf ("dia invalido,vuelva a ingresar el dia\n");
			scanf ("%d",&dia2);
		}
	}
	break;
	case 4:
	case 6:
	case 9:
	case 11:
		while (dia2>30)
		{
			printf ("dia invalido,vuelva a ingresar el dia\n");
			scanf ("%d",&dia2);
			
			
		}
		break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		while (dia2>31)
		{
			printf ("dia invalido,vuelva a ingresar el dia\n");
			scanf ("%d",&dia2);
		}
		break;
	}
	
	printf ("Ingrese el nombre 3: ");
	scanf ("%s", nombre3);
	printf ("Ingrese year de nacimiento:\n");
	scanf ("%d", &year3);
	
	while (year3>2023)
	{
		printf ("year invalido,ingrese otro year\n");
		scanf ("%d", &year3);
	}
	
	printf ("Ingrese mes de nacimiento:\n");
	scanf ("%d", &mes3);
	
	while (mes3>10 && year3==2023 || mes3>12)
	{
		printf ("mes invalido,ingrese otro mes\n");
		scanf ("%d", &mes3);
	}
	
	printf ("Ingrese dia de nacimiento:\n");
	scanf ("%d", &dia3);
	
	while (mes3==10 && year3==2023 && dia3>3 || dia3>30)
	{
		printf ("dia invalido,ingrese otro dia\n");
		scanf ("%d", &dia3);
	}
	switch(mes3)
		   
		   
		   
	{
	case 2: if (year3%4==0)
	{
		while(dia3>29)
		{
			printf ("dia invalido,vuelva a ingresar el dia\n");
			scanf ("%d",&dia3);
		}
	}
	else
	{
		while (dia3>28)
		{
			printf ("dia invalido,vuelva a ingresar el dia\n");
			scanf ("%d",&dia3);
		}
	}
	break;
	case 4:
	case 6:
	case 9:
	case 11:
		while (dia3>30)
		{
			printf ("dia invalido,vuelva a ingresar el dia\n");
			scanf ("%d",&dia3);
		}
		break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		while (dia3>31)
		{
			printf ("dia invalido,vuelva a ingresar el dia\n");
			scanf ("%d",&dia3);
		}
		break;
	}
	
	
	//ordenar de mayor a menor
	if (edad1>edad2 && edad1>edad3)
	{
		printf ("%s es la pesona mayor\n",nombre1);
		printf ("year de nacimiento:%d\n",year1);
		printf ("mes de nacimiento:%d\n",mes1);
		printf ("dia de nacimiento:%d\n",dia1);
		if (edad2>edad3)
		{
			printf ("%s es la pesona del medio\n",nombre2);
			printf ("year de nacimiento:%d\n",year2);
			printf ("mes de nacimiento:%d\n",mes2);
			printf ("dia de nacimiento:%d\n",dia2);
			printf ("%s es la pesona menor\n",nombre3);
			printf ("year de nacimiento:%d\n",year3);
			printf ("mes de nacimiento:%d\n",mes3);
			printf ("dia de nacimiento:%d\n",dia3);
		}
		else
		{
			printf ("%s es la pesona del medio\n",nombre3);
			printf ("year de nacimiento:%d\n",year3);
			printf ("mes de nacimiento:%d\n",mes3);
			printf ("dia de nacimiento:%d\n",dia3);
			printf ("%s es la pesona del menor\n",nombre2);
			printf ("year de nacimiento:%d\n",year2);
			printf ("mes de nacimiento:%d\n",mes2);
			printf ("dia de nacimiento:%d\n",dia2);
		}
		
		
	}
	if (edad2>edad1 && edad2>edad3)
	{
		printf ("%s es la persona mayor\n",nombre2);
		printf ("year de nacimiento:%d\n",year2);
		printf ("mes de nacimiento:%d\n",mes2);
		printf ("dia de nacimiento:%d\n",dia2);
		if (edad1>edad3)
		{
			printf ("%s es la persona del medio\n",nombre1);
			printf ("year de nacimiento:%d\n",year1);
			printf ("mes de nacimiento:%d\n",mes1);
			printf ("dia de nacimiento:%d\n",dia1);
			printf ("%s es la persona menor\n",nombre3);
			printf ("year de nacimiento:%d\n",year3);
			printf ("mes de nacimiento:%d\n",mes3);
			printf ("dia de nacimiento:%d\n",dia3);
		}
		else
		{
			printf ("%s es la persona del medio\n",nombre3);
			printf ("year de nacimiento:%d\n",year3);
			printf ("mes de nacimiento:%d\n",mes3);
			printf ("dia de nacimiento:%d\n",dia3);
			printf ("%s es la persona menor\n",nombre1);
			printf ("year de nacimiento:%d\n",year1);
			printf ("mes de nacimiento:%d\n",mes1);
			printf ("dia de nacimiento:%d\n",dia1);
		}
		if (edad3>edad1 && edad3>edad2)
		{
			printf ("%s es la persona mayor\n",nombre3);
			printf ("year de nacimiento:%d\n",year3);
			printf ("mes de nacimiento:%d\n",mes3);
			printf ("dia de nacimiento:%d\n",dia3);
		}
		if (edad2>edad1)
		{
			printf ("%s es la persona del medio\n",nombre2);
			printf ("year de nacimiento:%d\n",year2);
			printf ("mes de nacimiento:%d\n",mes2);
			
			
			
			printf ("dia de nacimiento:%d\n",dia2);
			printf ("%s es la persona menor\n",nombre1);
			printf ("year de nacimiento:%d\n",year1);
			printf ("mes de nacimiento:%d\n",mes1);
			printf ("dia de nacimiento:%d\n",dia1);
		}
		else
		{
			printf ("%s es la persona del medio\n",nombre1);
			printf ("year de nacimiento:%d\n",year1);
			printf ("mes de nacimiento:%d\n",mes1);
			printf ("dia de nacimiento:%d\n",dia1);
			printf ("%s es la persona menor\n",nombre2);
			printf ("year de nacimiento:%d\n",year2);
			printf ("mes de nacimiento:%d\n",mes2);
			printf ("dia de nacimiento:%d\n",dia2);
		}
	}
	
	
	modificacion(nombre1,nombre2,nombre3,dia1,mes1,year1,year2,mes2,dia2,year3,mes3,dia3);
	calcularEdad (diaActual,mesActual,anioActual,dia1,mes1,year1,year2,mes2,dia2,year3,mes3,dia3,nombre1,nombre2,nombre3);
	
	return 0;
}
	

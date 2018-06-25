#include <stdio.h>

// Prototipado de la funcion
int AreaPoligono ( int base , int altura );


//Funcion Princpal
void main()
	{
		char restriccion = 0 ;
		int base ,  altura , area ;

		do // El uso del Do While, ejecuta por lo menos 1 vez el código mientras se cumpla la condicion del while.
		{
			printf("\n\t Calculadora de %crea de un Poligono", 160 );
			printf("\n\n\t Ingresa la Base del Poligono: ");
			scanf( "%d" , &base );
			printf("\t Ingresa la Altura del Poligono: ");
			scanf( "%d" , &altura );

			area = AreaPoligono( base , altura );
			/*
				area tendra el valor que le regrese la funcion AreaPoligono, la cual se calcula a partir de 
				Enviar los valores de la Base y la Altura como parametros dentro de la funcion, los valores 
				de area, altura y base declarados dentro de la funcion AreaPoligono NO SON LOS MISMOS a los 
				declarados dentro de la funcion principal (main). 

				Eso aplica para todas las funciones, las variable declaradas y usadas dentro de una funcion
				solo valen dentro de esa funcion a menos que sean globales. 
			*/
			printf("\n\t El %crea del Poligono es %d.\n\n\n" , 160 , area );

			printf("\t Ingresa 1 para continuar calculando, 2 para terminar el programa: ");
			scanf( "%d" , &restriccion );

			system("cls");

		} while ( restriccion != 2 ); // La condicion es que mientras restriccion sea diferente de 2, se ejecutara 
									  // el código. 

		printf("\n\tEl programa termino.\n\n");
		system("pause");
	}

// Declaracion de la funcion
int AreaPoligono ( int base , int altura ) // La Funcion multiplica la base por la altura y regresa el area.
	{
		int area ; 

		area =  base * altura ;

		return area ;
	}

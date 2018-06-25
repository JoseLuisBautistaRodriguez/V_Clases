//Declaracion de librerias a usar:
#include <stdio.h>
/*
	Este programa realiza lo mismo que el anterior, pero se hace uso de variables globales.
*/
// Variables Globales:
int area, base, altura ;

//Protoripado de funciones
void AreaPoligono();

// Declaracion de funcion principal:
void main()
{
	char restriccion = 0 ;

	do
		{
			printf("\n\t Calculadora de %crea de un Poligono", 160 );
			printf("\n\n\t Ingresa la Base del Poligono: ");
			scanf( "%d" , &base );
			printf("\t Ingresa la Altura del Poligono: ");
			scanf( "%d" , &altura );

			AreaPoligono();
			printf("\n\t El %crea del Poligono es %d.\n\n\n" , 160 , area );

			printf("\t Ingresa 1 para continuar calculando, 2 para terminar el programa: ");
			scanf( "%d" , &restriccion );

			system("cls");

		} while ( restriccion != 2 );	
		
	printf("\n\tEl programa Termino.\n\n");
	system("pause");
}

// Declaracion de funcion
void AreaPoligono()
{
	area = base * altura ;
}

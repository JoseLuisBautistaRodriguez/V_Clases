#include <stdio.h>

// Encuentra el error en el cofigo y has que corra correctamente el programa.

void main()
{
	unsigned char numeroDeIteraciones , contador ;
	printf("Ingresa un numero del 1 al 5: ");
	scanf("%c" , &numeroDeIteraciones );

	for( contador = 0 ; contador < numeroDeIteraciones , contador++ ) printf("\n\t %d Hola." , contador + 1 );
}

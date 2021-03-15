#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/*int numero;
	int maximo, i;*/

	 setbuf(stdout, NULL);//disable buffer

	 int numeroUno, numeroDos, numeroTres, numeroDelMedio;
	    printf("Ingrese su primer numero: ");
	    scanf("%d", &numeroUno);
	    printf("Ingrese su segundo numero: ");
	    scanf("%d", &numeroDos);
	    printf("Ingrese su tercer numero: ");
	    scanf("%d", &numeroTres);

	    if(numeroUno == numeroDos || numeroUno == numeroTres || numeroDos == numeroTres)
	    {
	            printf("No hay numero del medio.");
	    }
	    else{


	     if((numeroDos>numeroUno && numeroUno>numeroTres) || (numeroTres>numeroUno && numeroUno>numeroDos))
	    {
	        printf("El numero del medio seria %d",numeroUno);
	    }
	    else if((numeroUno>numeroDos && numeroDos>numeroTres) || (numeroTres>numeroDos && numeroDos>numeroUno))
	    {
	        printf("El numero del medio seria %d",numeroDos);
	    }
	    else
	    {
	        printf("El numero del medio seria: %d",numeroTres);
	    }
	}


	/*printf("Ingrese su numero: ");
	//fflush(stdout);
	scanf("%d", &numero);

	maximo = numero;

	for (i = 1; i < 3; i++) {
		printf("Ingrese su numero: ");
		//fflush(stdout);
		scanf("%d", &numero);

		if (numero > maximo) {
			maximo = numero;

		}

	}

	printf("El mayor de los tres numeros es: %d", maximo);*/
	return EXIT_SUCCESS;
}

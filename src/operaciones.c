/*
 * operaciones.c
 *
 *  Created on: 15 abr. 2021
 *      Author: 54113
 */

#include "operaciones.h"

void menu()
{
		int numero1;
	    int numero2;
	    int opciones;
	    int resultado;
	    float resultadofloat;


	// opciones de menu
	do
	{

	printf("\n !! BIENVENIDOS A LA CALCULADORA!!\n");

	printf("1. Sumar");
	printf("\n2. Restar");
	printf("\n3. Multiplicacion");
	printf("\n4. Dividision");
	printf("\n5. Factorial");
	printf("\n6. Salir");
	// opciones guardadas

	printf(" \n digite su opcion: ");
	scanf("%d", &opciones);


	// pido los valores
	printf(" ingrese un valor:");
	scanf("%d", &numero1);

	printf(" Ingrese otro valor:\n ");
	scanf("%d", &numero2);


	switch(opciones)
	    {
	        case 1:
	            resultado = sumar(numero1,numero2);
	        break;
	        case 2:
	            resultado = restar(numero1,numero2);
	        break;
	          case 3:
	            resultado = multiplicar(numero1,numero2);
	        break;
	        case 4:
	            resultadofloat = dividir(numero1,numero2);
	        break;
	        case 5:
	        	resultado = factorial(numero1);
	        	break;
	        case 6:
	        	break;
	        default:
	        	printf("Error al ingreso elija la opcion corrercta");
	    }

	if(opciones != 4)
	  	        {
	  	        	  printf(" el resultado es %d \n", resultado);
	  	        }
	  	        else
	  	        {
	  	        	printf(" el resultado es %f", resultadofloat);
	  	        }


	}while(opciones!= 6);

}

int sumar(int operador1, int operador2)
{
     int  resultado;
     resultado = operador1 + operador2;
     return resultado;
}


int restar(int operador1, int operador2)
{
    int resultado;
    resultado = operador1 - operador2;
    return resultado;
}


int multiplicar(int operador1, int operador2)
{
     int resultado;
     resultado = operador1 * operador2;
     return resultado;
}


float dividir(int operador1, int operador2)
{
    float resultado;
    if(operador2 == 0)
    {
        resultado = (float)operador1 / operador2;
    }
    else
    {
        printf(" ERROR no se puede dividir x 0");
    }



    return resultado;
}
int factorial(int operador1)

{
	int resultado;

	if(operador1 ==0)
	{
		resultado =1;

	}
	else
	{
		resultado = operador1 * factorial(operador1 -1);
	}
	return resultado;
}

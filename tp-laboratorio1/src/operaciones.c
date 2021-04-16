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

	printf("1. Sumar");
	printf("\n2. Restar");
	printf("\n3. Multiplicar");
	printf("\n4. Dividir");
	printf("\n5. Factorear");
	// opciones guardadas

	printf(" \n digite su opcion: ");
	scanf("%d", &opciones);


	// pido los valores
	printf(" ingrese un valo:");
	scanf("%d", &numero1);

	printf(" Ingrese otro valor: ");
	scanf("%d", &numero2);


	switch(opciones)
	    {
	        case's':
	            resultado = sumar(numero1,numero2);
	        break;
	        case'r':
	            resultado = restar(numero1,numero2);
	        break;
	          case'm':
	            resultado = multiplicar(numero1,numero2);
	        break;
	        case'd':
	            resultadofloat = dividir(numero1,numero2);
	        break;
	    }

	        if(opciones!='d')
	        {
	             printf(" el resultado es %d", resultado);
	        }
	        else
	        {
	        	printf(" el resultado es %f", resultadofloat);
	        }



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

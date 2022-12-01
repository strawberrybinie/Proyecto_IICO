/*Crear un programa que dado un intervalo y un incremento calcule los valores del numero 'e'
  Tomando en cuenta que el programa será llamado por un bot y no por un usuario
  Por lo que no requiere de interfaz
  Ahora se agregara un programa que calcule el encabezado simple de un archivo BPM y con ello
  un menu de opciones*/

//se agregan la(s) biblioteca(s)
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	//se imprime en pantalla el menu de opciones con los incisos a elegir luego un scanf que lo lea
	int opc=0;
	printf("\t\t\tCalcula... Programa\nQue desea hacer?\n");
	printf("1. Calcular 'E'\n2. Calcular encabezado BPM\n");
	printf("\tTeclee el numero de la opcion que desea: ");
	scanf_s("%i", &opc);

	/*se agrega un if con la condición de si se introduce el inciso 1, llevar al programa señalado
	  o el 2, llevar al programa señalado, de no ser así, mostrar un mensaje de error*/
	if (opc == 1)
	{
		//Agregamos el programa que calcula e con interfaz
		double limInicio;
		double limFinal;
		double incremento;
		double resulExp;
		double resulE = 0;
		int j;
		int z;
		int fact;
		printf("\t\tCalcula el valor de 'e'\nIntroduce tu limite inicial: ");
		scanf_s("%lf", &limInicio);
		printf("Introduce el limite final: ");
		scanf_s("%lf", &limFinal);
		printf("Introduce el intervalo: ");
		scanf_s("%lf", &incremento);
		int conteo = (limFinal - limInicio) / incremento;
		if (limInicio == 0 && limFinal == 0)
		{
			resulExp = 1;
			resulE = 1;
			printf("%f %f %f", limInicio, resulE, resulExp);
			return 0;
		}
		else if (incremento == 0)
		{
			return 1;
		}
		while (limInicio <= limFinal + incremento)
		{
			for (j = 0; j <= conteo; j++)
			{
				fact = 1;
				for (z = 1; z <= j; z++)
				{
					fact = fact * z;
				}
				resulE = resulE + (pow(limInicio, j)) / fact;
			}
			resulExp = exp(limInicio);
			printf("Calculo LI: %f \tCalculo 'E': %f \tCalculo Exp: %f\n", limInicio, resulE, resulExp);
			limInicio = limInicio + incremento;
			resulE = 0;
		}
	}
	else if (opc == 2)
	{
		/*cuando la condicion nos lleva al programa del bpm, declaramos los valores necesarios,
	  el tamaño, los dos reservados, el offbits, y los tamaños en hexadecimales*/
		int bfSize, bfReserved1, bfReserved2, bfOffBits, hexaSize, hexaBits;

		//haremos uso de interfaz
		printf("Medida: ");
		//escaneamos los valores del tamaño y los bits para inicializar los otros en 0
		scanf_s("%i", &bfSize);
		bfReserved1 = 0000;
		bfReserved2 = 0000;
		printf("OffBits: ");
		scanf_s("%i", &bfOffBits);
		//Hacemos la operación que transforme nuestros numeros y los imprimimos en pantalla
		hexaSize = bfSize;
		hexaBits = bfOffBits;

		printf("%c%c%08X%04i%04i%08X", 66, 77, hexaSize, bfReserved1, bfReserved2, hexaBits);
	}
	else printf("Valor no valido");

	//aquí acaba el programa
}
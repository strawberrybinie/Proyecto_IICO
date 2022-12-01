#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int opc=0;
	printf("\t\t\tCalcula... Programa\nQue desea hacer?\n");
	printf("1. Calcular 'E'\n2. Calcular encabezado BPM\n");
	printf("\tTeclee el numero de la opcion que desea: ");
	scanf_s("%i", &opc);

	if (opc == 1)
	{
		double limInicio;
		double limFinal;
		double incremento;

		double resulExp;
		double resulE = 0;

		int j;
		int z;
		int fact;

		scanf_s("%lf", &limInicio);
		scanf_s("%lf", &limFinal);
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
			printf("%f %f %f\n", limInicio, resulE, resulExp);
			limInicio = limInicio + incremento;
			resulE = 0;
		}
	}
	else if (opc == 2)
	{
		int bfSize, bfReserved1, bfReserved2, bfOffBits, hexaSize, hexaBits;

		scanf_s("%i", &bfSize);
		bfReserved1 = 0000;
		bfReserved2 = 0000;
		scanf_s("%i", &bfOffBits);
		
		hexaSize = bfSize;
		hexaBits = bfOffBits;

		printf("%c%c%08X%04i%04i%08X", 66, 77, hexaSize, bfReserved1, bfReserved2, hexaBits);
	}
	else printf("Valor no valido");
}
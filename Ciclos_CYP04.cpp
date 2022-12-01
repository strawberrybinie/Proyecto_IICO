/*Crear un programa que dado un intervalo y un incremento calcule los valores del numero 'e'
  Tomando en cuenta que el programa será llamado por un bot y no por un usuario
  Por lo que no requiere de interfaz*/

#include <stdio.h>
#include <math.h>

int main()
{
	double limInicio;
	double limFinal;
	double incremento;

	double resulExp;
	double resulE = 0;

	int j;
	int z;
	int fact;

<<<<<<< Updated upstream
	//Haremos uso de un scanf para leer los valores que se van a ingresar
=======
>>>>>>> Stashed changes
	scanf_s("%lf", &limInicio);
	scanf_s("%lf", &limFinal);
	scanf_s("%lf", &incremento);
	
	int conteo = (limFinal - limInicio) / incremento;
<<<<<<< Updated upstream
	/*La condición del while será que mientras el limite inicial sea menor o igual a la suma 
	  del limite final con el incremento entre*/
=======

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
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
		/*Por ultimo imprimimos los datos en pantalla, agregamos el incremento al limite incial para que
	      vuelva al while y se repita, de no ser así que regrese a 0*/
		printf("%f %f %f\n", limInicio, resulE, resulExp);
=======

		printf("Calculo LI: %f \tCalculo 'E': %f \tCalculo Exp: %f\n", limInicio, resulE, resulExp);
>>>>>>> Stashed changes
		limInicio = limInicio + incremento;
		resulE = 0;
	}

}
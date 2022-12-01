/*Crear un programa que dado un intervalo y un incremento calcule los valores del numero 'e'
  Tomando en cuenta que el programa ser� llamado por un bot y no por un usuario
  Por lo que no requiere de interfaz*/
//EN ESTA PRUEBA SE USARA UNA INTERFAZ

  //Incluimos las bibliotecas necesarias, debido a que usaremos funciones matematicas agregamos math
#include <stdio.h>
#include <math.h>

int main()
{
	/*Primero declararemos las variables que se usar�n en el programa
	  Que ser�n el limite inicial, el final, el intervalo, el resultado de E,
	  el resultado del exponencial, dos variables que almacenen datos en el while (j, z)
	  y una que almacene los factores*/ 
	// Algunas variables deber�n ser inicializadas
	double limInicio;
	double limFinal;
	double incremento;

	double resulExp;
	double resulE = 0;

	int j;
	int z;
	int fact;

	//Haremos uso de un scanf para leer los valores que se van a ingresar
	printf("\t\tCalcula el valor de 'e'\nIntroduce tu limite inicial: ");
	scanf_s("%lf", &limInicio);
	printf("Introduce el limite final: ");
	scanf_s("%lf", &limFinal);
	printf("Introduce el intervalo: ");
	scanf_s("%lf", &incremento);
	/*Al ser un incremento iniciaremos un contador que ayude al while
	  el contador ser� igual a la divisi�n entre el incremento y la resta de los limites
	  para que sepa cuantas veces ingresar al while*/
	int conteo = (limFinal - limInicio) / incremento;
	/*Para casos especiales donde ambos limites den 0 agregaremos un if, para evitar que estos
	  valores entren al while, lo mismo si el incremento es 0, haciendo que nos regrese valores
	  en exp y en 'e' de 1*/
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
	/*La condici�n del while ser� que mientras el limite inicial sea menor o igual a la suma 
	  del limite final con el incremento entre*/
	while (limInicio <= limFinal + incremento)
	{
		/*Dentro del while agregaremos un for, donde la condici�n ser� que mientras 'j' sea menor o igual
	      al contador entra, si esto se cumple se le agregara 1 a 'j', dentro del for iniciaremos el
    	  factor a 1 y agregaremos otro for, con la condici�n de que mientras 'z' sea menor o igual
		  a 'j' entre y	le agregue 1 a 'z'*/
		for (j = 0; j <= conteo; j++)
		{
			fact = 1;
			for (z = 1; z <= j; z++)
			{
				fact = fact * z;
			}
			/*Luego haremos el calculo del numero 'e', que es un pow del limite inicial
			  y 'j' dividido con el factor despu�s el resultado del exponente usando la funci�n exp*/
			resulE = resulE + (pow(limInicio, j)) / fact;
		}
		resulExp = exp(limInicio);
		/*Por ultimo imprimimos los datos en pantalla, agregamos el incremento al limite incial para que
	      vuelva al while y se repita, de no ser as� que regrese a 0*/
		printf("Calculo LI: %f \tCalculo 'E': %f \tCalculo Exp: %f\n", limInicio, resulE, resulExp);
		limInicio = limInicio + incremento;
		resulE = 0;
	}
	//aqu� acaba el programa
}
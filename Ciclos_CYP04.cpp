/*Crear un programa que dado un intervalo y un incremento calcule los valores del numero 'e'
  Tomando en cuenta que el programa será llamado por un bot y no por un usuario
  Por lo que no requiere de interfaz*/
//EN ESTA PRUEBA SE USARA UNA INTERFAZ

  //Incluimos las bibliotecas necesarias, debido a que usaremos funciones matematicas agregamos math
#include <stdio.h>
<<<<<<< Updated upstream
#include <math.h>

int main()
{
	/*Primero declararemos las variables que se usarán en el programa
	  Que serán el limite inicial, el final, el intervalo, el resultado de E,
	  el resultado del exponencial, dos variables que almacenen datos en el while (j, z)
	  y una que almacene los factores*/ 
	// Algunas variables deberán ser inicializadas
	double limInicio;
	double limFinal;
	double incremento;

	double resulExp;
	double resulE = 0;

	int j;
	int z;
	int fact;
=======
#include <string.h>

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
		//Al ser una prueba, el programa que calcula 'e' aún no será agregado
		printf("calculo e");
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
>>>>>>> Stashed changes

	//Haremos uso de un scanf para leer los valores que se van a ingresar
	printf("\t\tCalcula el valor de 'e'\nIntroduce tu limite inicial: ");
	scanf_s("%lf", &limInicio);
	printf("Introduce el limite final: ");
	scanf_s("%lf", &limFinal);
	printf("Introduce el intervalo: ");
	scanf_s("%lf", &incremento);
	/*Al ser un incremento iniciaremos un contador que ayude al while
	  el contador será igual a la división entre el incremento y la resta de los limites
	  para que sepa cuantas veces ingresar al while*/
	int conteo = (limFinal - limInicio) / incremento;
	/*La condición del while será que mientras el limite inicial sea menor o igual a la suma 
	  del limite final con el incremento entre*/
	while (limInicio <= limFinal + incremento)
	{
		/*Dentro del while agregaremos un for, donde la condición será que mientras 'j' sea menor o igual
	      al contador entra, si esto se cumple se le agregara 1 a 'j', dentro del for iniciaremos el
    	  factor a 1 y agregaremos otro for, con la condición de que mientras 'z' sea menor o igual
		  a 'j' entre y	le agregue 1 a 'z'*/
		for (j = 0; j <= conteo; j++)
		{
			fact = 1;
			for (z = 1; z <= j; z++)
			{
				fact = fact * z;
			}
			/*Luego haremos el calculo del numero 'e', que es un pow del limite inicial
			  y 'j' dividido con el factor después el resultado del exponente usando la función exp*/
			resulE = resulE + (pow(limInicio, j)) / fact;
		}
		resulExp = exp(limInicio);
		/*Por ultimo imprimimos los datos en pantalla, agregamos el incremento al limite incial para que
	      vuelva al while y se repita, de no ser así que regrese a 0*/
		printf("Calculo LI: %f \tCalculo 'E': %f \tCalculo Exp: %f\n", limInicio, resulE, resulExp);
		limInicio = limInicio + incremento;
		resulE = 0;
	}
	//aquí acaba el programa
}
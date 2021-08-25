/* Los comentarios sirven para comprender con mayor facilidad nuestros programas
Nombre del programa: Operaciones
Autor: Mariana Ramírez Sánchez
Modificado por: -
¿Qué hace el programa?
¿Necesita un circuito?
Colocar una imagen en el repositorio-Liga
Terminales y modos que se utilizan: -ejemplo;gpio_5_salida
*/

// Biblioteca
#include<stdio.h>

// Estructura main
int main(){
	// Declaración de variables
	int a=10, opc;
	float b=5, c, d, suma, resta, mul, div;
	float sum,resta1,mult1,div1;

	// Realización de las operaciones
	suma=a+b;
	resta=a-b;
	mul=a*b;
	div=a/b;
	
	// Se imprimen los valores de las operaciones
	printf("\n\tValores de las operaciones para los valores de a=10 y b=5 \n");
	printf("El valor de la suma es: %1.2f\n",suma);
	printf("El valor de la resta es: %1.2f\n",resta);
	printf("El valor de la multiplicación es: %1.2f\n",mul);
	printf("El valor de la división es: %1.2f\n",div);

	/* Se utiliza un do while para volver a realizar la 
	   ejecución de las veces que quiera el usuario */
	do{
		// Se genera un menú de opciones 
	printf("\nMenú de opciones\n");
	printf("1. Suma\n");
	printf("2. Resta\n");
	printf("3. Multiplicación\n");
	printf("4. División\n");
	printf("Elige que operacón quieres realizar:");
	scanf("%d",&opc);

	// Se piden los datos por consola al usuario
	printf("\nIngrese un valor entero para c: ");
	scanf("%f",&c);
	
	printf("Ingrese un valor decimal para d: ");
	scanf("%f",&d);
	
	printf("\n\tValores de las operaciones para los valores que se ingresaron \n");
	/* Con la instrucción switch se realiza cada operación de acuerdo con los que 
	   el usuario haya elegido */
	switch(opc){
		case 1:
			sum=c+d;
			printf("El valor de la suma es: %1.2f\n",sum);
			break;
		case 2:
			resta1=c-d;
			printf("El valor de la resta es: %1.2f\n",resta1);
			break;
		case 3:
			printf("El valor de la multiplicación es: %1.2f\n",mult1);
			mult1=c*d;
			break;
		case 4:
			if(d==0){
				printf("No se puede realizar la operación");
			} else{
				div1=c/d;
				printf("El valor de la división es: %1.2f\n",div1);
			}
			break;
		defaul:
			printf("No se coloco una opción correcta");
			break;
	}
	printf("\n1. Si\n");
	printf("2. No");
	printf("\n¿Deseas realizar otra vez la operación? ");
	scanf("%d",&opc);
	}while(opc==1); // Se evalua la opción que eligio el usuario

	return 0;
}
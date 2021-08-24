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

int main(){
	int a=10, c;
	float b=5, d, suma, resta, mul, div;
	float sum,rest,mult1,div1;
	
	printf("Ingrese un valor entero para a: ");
	scanf("%d",&c);
	
	printf("Ingrese un valor decimal para b: ");
	scanf("%f",&d);
		
	suma=a+b;
	resta=a-b;
	mul=a*b;
	div=a/b;

	sum=c+d;
	rest=c-d;
	mult1=c*d;
	if(d==0){
		printf("No se puede realizar la operaci%cn",162);
	} else{
		div1= c/d;
	}
	
	printf("\n\tValores de las operaciones para los valores de a=10 y b=5 \n");
	printf("El valor de la suma es: %1.4f\n",suma);
	printf("El valor de la resta es: %1.4f\n",resta);
	printf("El valor de la multiplicación es: %1.4f\n",mul);
	printf("El valor de la división es: %1.4f\n",div);
	
	printf("\n\tValores de las operaciones para los valores que se ingresaron \n");
	printf("El valor de la suma es: %1.4f\n",sum);
	printf("El valor de la resta es: %1.4f\n",rest);
	printf("El valor de la multiplicación es: %1.4f\n",mult1);
	printf("El valor de la división es: %1.4f\n",div1);

	return 0;
}
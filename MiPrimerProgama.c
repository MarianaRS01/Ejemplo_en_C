/* Los comentarios sirven para comprender con mayor facilidad nuestros programas
Nombre del programa: Menú de opciones 
Autor: Mariana Ramírez Sánchez
Modificado por: -
¿Qué hace el programa?
¿Necesita un circuito?
Colocar una imagen en el repositorio-Liga
Terminales y modos que se utilizan: -ejemplo;gpio_5_salida
*/

// Biblioteca
#include<stdio.h>

// Fución main
int main(){
	// Declaración de variables 
	int a, i=0;
    
	printf("Ingrese un número de entre 0-10: ");
	scanf("%d", &a);
	
	// Opción 1 mediante if else
	if(a==0){
		printf("Ha seleccionado la opción 0");	
	}else if(a==1){
		printf("Ha seleccionado la opción 1");
	}else if(a==2){
		printf("Ha seleccionado la opción 2");
	}else if(a==3){
		printf("Ha seleccionado la opción 3");
	}else if(a==4){
		printf("Ha seleccionado la opción 4");
	}else if(a==5){
		printf("Ha seleccionado la opción 5");
	}else if(a==6){
		printf("Ha seleccionado la opción 6");
	}else if(a==7){
		printf("Ha seleccionado la opción 7");
	}else if(a==8){
		printf("Ha seleccionado la opción 8");
	}else if(a==9){
		printf("Ha seleccionado la opción 9");
	}else if(a==10){
		printf("Ha seleccionado la opción 10");
	}
	
	// Opción 2 utilización de la función while
	while(i<=10){
		if(i==a){
			printf("\nHa seleccionado la opción %d",a);
		}
		i=i+1; // Contador para poder cumplir con la condicón del while
	}

	return 0;
}
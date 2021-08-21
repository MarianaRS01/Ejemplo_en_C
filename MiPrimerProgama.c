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
	int a;
	
	printf("Ingrese un número de entre 0-10: ");
	scanf("%d", &a);
	
	if(a==0){
		printf("Ha seleccionado la opci%cn 0",162);	
	}else if(a==1){
		printf("Ha seleccionado la opci%cn 1",162);
	}else if(a==2){
		printf("Ha seleccionado la opci%cn 2",162);
	}else if(a==3){
		printf("Ha seleccionado la opci%cn 3",162);
	}else if(a==4){
		printf("Ha seleccionado la opci%cn 4",162);
	}else if(a==5){
		printf("Ha seleccionado la opci%cn 5",162);
	}else if(a==6){
		printf("Ha seleccionado la opci%cn 6",162);
	}else if(a==7){
		printf("Ha seleccionado la opci%cn 7",162);
	}else if(a==8){
		printf("Ha seleccionado la opci%cn 8",162);
	}else if(a==9){
		printf("Ha seleccionado la opci%cn 9",162);
	}else if(a==10){
		printf("Ha seleccionado la opci%cn 10",162);
	}
	
	return 0;
}
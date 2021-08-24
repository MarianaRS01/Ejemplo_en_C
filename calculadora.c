#include<stdio.h>
#include<math.h>

int main(){
	int opc;
	float m,b,a,b1,c,y,dis;
	float rl,rc1,rc2,rc1_real,rc1_img,rc2_img;
	
	
	printf("1. Calcular las raíces lineales\n");
	printf("2. Calcular las raíces cuadráticas\n");
	printf("3. Calcular las raíces cúbicas\n");
	printf("4. Salir del programa\n");
	printf("5. Salir del programa\n");
	printf("Ingrese la opción de las raices que desea calcular: ");
	scanf("%d",&opc);
	
	switch(opc){
		case 1:
			printf("\nIngrese el valor del coeficiente m: ");
			scanf("%f",&m);
			printf("Ingrese el valor del coeficiente b: ");
			scanf("%f",&b);
			
			if(m==0){
				printf("Las raices no pueden ser calculadas para m=0");
			}else{
				if(b>=0){
					rl=-(b/m);
					printf("La raíces de la recta es: %1.4f",rl);
				}else{
					rl=(b/m);
					printf("La raíces de la recta es: %1.4f",rl);
				}
			}
			break;
		case 2:
			printf("\nIngrese el valor del coeficiente a: ");
			scanf("%f",&a);
			printf("Ingrese el valor del coeficiente b: ");
			scanf("%f",&b1);
			printf("Ingrese el valor del coeficiente c: ");
			scanf("%f",&c);
			
			if(a==0){
				printf("Las raices no pueden ser calculadas para a=0");
			}else{
				dis=pow(b1,2)-4*a*c;
				if(dis>0){
					rc1=(-b1+sqrt(pow(b1,2)-4*a*c))/2*a;
					rc2=(-b1-sqrt(pow(b1,2)-4*a*c))/2*a;
					printf("\nSe tienen dos raíces reales diferentes");
					printf("\nEl valor de la raíz cuadrada #1: %1.4f",rc1);
					printf("\nEl valor de la raíz cuadrada #2: %1.4f",rc2);
				}else if(dis=0){
					rc1=(-b1+sqrt(pow(b1,2)-4*a*c))/2*a;
					rc2=(-b1-sqrt(pow(b1,2)-4*a*c))/2*a;
					printf("\nSe tienen dos raíces reales iguales");
					printf("\nEl valor de la raíz cuadrada #1: %1.4f",rc1);
					printf("\nEl valor de la raíz cuadrada #2: %1.4f",rc2);
				}else{
					rc1_real=(-b1)/(2*a);
					y=fabs((pow(b1,2)-4*a*c));
					rc1_img=sqrt(y)/(2*a);
					rc2_img=sqrt(y)/(2*a);
					printf("\nSe tienen dos raíces complejas diferentes");
					printf("\nEl valor de la raíz cuadrada #1: %1.4f",rc1_real);
					printf(" + %1.4f i",rc1_img);
					printf("\nEl valor de la raíz cuadrada #2: %1.4f",rc1_real);
					printf(" + %1.4f i",rc2_img);
				}
			}
			break;
		case 3:
			
			break;
		case 4:
			
			break;
		case 5:
			printf("\nHa salido del programa");
			break;
		default:
			printf("\n¡El valor introducido es incorrecto!");
		break;	
	}
	
	return 0;
}
#include<stdio.h>

int main(){
	int opcion;
	
	do{
		system("cls");
		printf("TICKET PRO\n\n");
		printf("1. Concierto\n");
		printf("2. Museo\n");
		printf("3. Cine\n");
		printf("\n");
		printf("Salir\n");
		scanf("%d", &opcion);
		
		switch(opcion){
			case 1:
				system("cls");
				printf("1. Hip-Hop\n");
				printf("2. Pop\n");
				printf("\n");
				printf("Volver al menu principal\n");
				getch();
				break;
			case 2:
				system("cls");
				printf("1. Arte contemporaneo\n");
				printf("2. Arte antiguo\n");
				printf("\n");
				printf("Volver al menu principal\n");
				getch();
				break;
			case 3:
				system("cls");
				printf("1. Yelmo Cines\n");
				printf("2. Cinesa\n");
				printf("3. Kinepolis\n");
				printf("\n");
				printf("Volver al menu principal\n");
				getch();
				break;
			case 4:
				break;
			default:
				system("cls");
				printf("La opcion escogida es incorrecta");
				getch();
				break;
		}
		
	} while(opcion!=4);
	return 0;
}


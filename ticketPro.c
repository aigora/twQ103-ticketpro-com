#include<stdio.h>

int main(){
	int opcion, dia, mes, year;
	
	do{
		system("cls");
		printf("TICKET PRO\n");
		printf("\n");
		printf("1. Concierto\n");
		printf("2. Museo\n");
		printf("3. Cine\n");
		printf("4. Evento deportivo\n");
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
				scanf("%d", &opcion);
				switch (opcion){
					case 1:
						system("cls");
						printf("Seleccione fecha (dd/mm/aa)\n");
						scanf("%d %d %d", &dia,&mes,&year);
						printf("Fecha: %d/%d/%d", dia,mes,year);
						getch();
						break;
					case 2:
						system("cls");
						printf("Seleccione fecha (dd/mm/aa)\n");
						scanf("%d %d %d", &dia,&mes,&year);
						printf("Fecha: %d/%d/%d", dia,mes,year);
						getch();
						break;
				}
				getch();
				break;
			case 2:
				system("cls");
				printf("1. Arte contemporaneo\n");
				printf("2. Arte antiguo\n");
				printf("\n");
				printf("Volver al menu principal\n");
				scanf("%d", &opcion);
				switch (opcion){
					case 1:
						system("cls");
						printf("Seleccione fecha (dd/mm/aa)\n");
						scanf("%d %d %d", &dia,&mes,&year);
						printf("Fecha: %d/%d/%d", dia,mes,year);
						getch();
						break;
					case 2:
						system("cls");
						printf("Seleccione fecha (dd/mm/aa)\n");
						scanf("%d %d %d", &dia,&mes,&year);
						printf("Fecha: %d/%d/%d", dia,mes,year);
						getch();
						break;
				}
				getch();
				break;
			case 3:
				system("cls");
				printf("1. Yelmo Cines\n");
				printf("2. Cinesa\n");
				printf("3. Kinepolis\n");
				printf("\n");
				printf("Volver al menu principal\n");
				scanf("%d", &opcion);
				switch (opcion){
					case 1:
						system("cls");
						printf("Seleccione fecha (dd/mm/aa)\n");
						scanf("%d %d %d", &dia,&mes,&year);
						printf("Fecha: %d/%d/%d", dia,mes,year);
						getch();
						break;
					case 2:
						system("cls");
						printf("Seleccione fecha (dd/mm/aa)\n");
						scanf("%d %d %d", &dia,&mes,&year);
						printf("Fecha: %d/%d/%d", dia,mes,year);
						getch();
						break;
					case 3:
						system("cls");
						printf("Seleccione fecha (dd/mm/aa)\n");
						scanf("%d %d %d", &dia,&mes,&year);
						printf("Fecha: %d/%d/%d", dia,mes,year);
						getch();
						break;
				}
				getch();
				break;
			case 4:
				system("cls");
				printf("1. Futbol\n");
				printf("2. Baloncesto\n");
				printf("3. Tenis\n");
				printf("4. Balonmano\n");
				printf("5. Rugby\n");
				printf("\n");
				printf("Volver al menu principal\n");
				scanf("%d", &opcion);
				switch (opcion){
					case 1:
						system("cls");
						printf("Seleccione fecha (dd/mm/aa)\n");
						scanf("%d %d %d", &dia,&mes,&year);
						printf("Fecha: %d/%d/%d", dia,mes,year);
						getch();
						break;
					case 2:
						system("cls");
						printf("Seleccione fecha (dd/mm/aa)\n");
						scanf("%d %d %d", &dia,&mes,&year);
						printf("Fecha: %d/%d/%d", dia,mes,year);
						getch();
						break;
					case 3:
						system("cls");
						printf("Seleccione fecha (dd/mm/aa)\n");
						scanf("%d %d %d", &dia,&mes,&year);
						printf("Fecha: %d/%d/%d", dia,mes,year);
						getch();
						break;
					case 4:
						system("cls");
						printf("Seleccione fecha (dd/mm/aa)\n");
						scanf("%d %d %d", &dia,&mes,&year);
						printf("Fecha: %d/%d/%d", dia,mes,year);
						getch();
						break;
					case 5:
						system("cls");
						printf("Seleccione fecha (dd/mm/aa)\n");
						scanf("%d %d %d", &dia,&mes,&year);
						printf("Fecha: %d/%d/%d", dia,mes,year);
						getch();
						break;
				}
				getch();
				break;
			case 5:
				break;
			default:
				system("cls");
				printf("La opcion escogida es incorrecta");
				
				break;
		}
		
	} while(opcion<=1&&opcion<=5);
	return 0;
}


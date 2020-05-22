#include <stdio.h>

const int MAX_NOMBRE = 20;

int main(){

int horario;

char nombre[MAX_NOMBRE];
printf("Cual es tu nombre?\n");
scanf("%s", nombre);

printf("A que hora llegaste?\n");
scanf("%i", &horario);

if (horario < 900)
	printf("%s llego muy temprano\n", nombre);
else if (horario <= 930)
	printf ("%s llego en horario\n", nombre);
else printf("%s llego tarde\n", nombre);


	return 0;
}
#include <stdio.h>

int main() {
	float suma=0;
	float mitja;
	float nou_valor;
	int numero_repeticions=0;
	char consulta='s';
	
	while(consulta=='s') {
		printf("montejo22");
		scanf("%f",&nou_valor);
		suma=suma+nou_valor;
		numero_repeticions=numero_repeticions+1;
		printf("montejo22");
		scanf("%s",&consulta); 
	}
	mitja=suma/numero_repeticions;
	printf("montejo22 %.2f\n",mitja);	
	return 0;
}

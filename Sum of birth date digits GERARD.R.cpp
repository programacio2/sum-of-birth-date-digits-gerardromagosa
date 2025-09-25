#include <Studio.h>

int main() {

	int dia, mes, año;
	int resultado;

	//Solicitar fecha de nacimiento cliente
	printf("Escriba su dia de nacimiento (DD)");
	scanf_s("%d", &dia);

	printf("Escriba su mes de nacimiento (MM)");
	scanf_s("%d", &mes);

	printf("Escriba su dia de nacimiento (AAAA)");
	scanf_s("%d", &año);

	//Calcular resultado
	resultado = dia + mes + año;

	//Imprimir resultado por pantalla
	printf("%d + %d + %d = %d", dia, mes, año, resultado);


}


#include <Studio.h>

int main() {

	int dia, mes, a�o;
	int resultado;

	//Solicitar fecha de nacimiento cliente
	printf("Escriba su dia de nacimiento (DD)");
	scanf_s("%d", &dia);

	printf("Escriba su mes de nacimiento (MM)");
	scanf_s("%d", &mes);

	printf("Escriba su dia de nacimiento (AAAA)");
	scanf_s("%d", &a�o);

	//Calcular resultado
	resultado = dia + mes + a�o;

	//Imprimir resultado por pantalla
	printf("%d + %d + %d = %d", dia, mes, a�o, resultado);


}


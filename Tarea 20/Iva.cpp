#include <stdio.h>

#include "priva.h"

int main() {
	float precio=0.0f;
	printf ("�Cu�l es el precio del producto?");
	scanf ("%f", &precio);
	printf ("Total: %.2f\n", precio);
	printf ("IVA: %.2f\n", fniva(precio));
	printf ("Total sin IVA: %.2f\n", fnsiniva(precio));
	return 0;
}


#include <stdio.h>
#include "definiciones.h"
#define TIPO_USUARIO "prueba"

char mensaje[100];

void saluda() {
    imprime("hola Antonio");
}

int main() {
    sprintf(mensaje, "Hola, estas utilizando %s", TIPO_USUARIO);
    imprime(mensaje);
    saluda();
    suma(2,3);
}
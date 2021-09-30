#include <stdio.h>
#include "definiciones.h"
int main() {
    char mensaje[100];
    sprintf (mensaje, "Hola , estas utilizando %s", TIPO_USUARIO);
    imprime (mensaje);
}
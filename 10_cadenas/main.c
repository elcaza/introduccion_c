#include <stdio.h>
int main() 
{
    char * cadena1 = "hola 1";
    printf ("1) Valor de cadena1 : %s\n", cadena1 );
    
    char cadena2 [] = "hola 2";
    
    printf ("2) Valor de cadena2 (puntero): %p\n", cadena2 );
    printf ("3) Valor de cadena2 (cadena): %s\n", cadena2 );
}
#include <stdio.h>
int main() {
   // printf() displays the string inside quotation
   int operacion = 5+3;
   int valor_nuevo = 4+4;

   // operador operacion++
   printf("1. La operacion es: %d\n", operacion);
   printf("2. La operacion es: %d\n", operacion++);
   printf("3. La operacion es: %d\n", operacion);
   
   // Operador ++valor_nuevo
   printf("==============\n");
   printf("1. La operacion es: %d\n", valor_nuevo);
   printf("2. La operacion es: %d\n", ++valor_nuevo);
   printf("3. La operacion es: %d\n", valor_nuevo);

   return 0;
}
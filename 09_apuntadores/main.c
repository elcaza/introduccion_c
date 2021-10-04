#include <stdio.h>
int main() {
    // Creamos x y asignamos el valor de 25 (mem_1(valor))
    int x = 25;
    
    // Creamos "y" y le asignamos el valor de x (mem_2(valor))
    int y = x; // 25
    
    // Creamos una variable apuntador px y le asignamos el valor de la dirección de la memoria "x" (mem1)
    int * px = &x; // 0x7ffc11659930
    int * py = &y; // 0x7ffc11659934
    
    // a la variable x la redefinimos en 10
    x = 10;
    
    printf ("1) Valor de x: %d\n", x );
    printf ("2) Valor de y: %d\n", y );

    printf ("3) Valor de px: %p\n", px );
    printf ("4) Valor de py: %p\n", py );
    
    printf ("5) Valor de la variable a la que apunta px: %d\n", * px );
    printf ("6) Valor de la variable a la que apunta py: %d\n", * py );

    y = 100;
    printf ("7) Valor de x: %d\n", x );
    printf ("8) Valor de y: %d\n", y );

    printf ("9) Valor de px: %p\n", px );
    printf ("10) Valor de py: %p\n", py );
}
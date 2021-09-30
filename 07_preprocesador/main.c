/*
# define NOMBRE expresion
# define fun (...) expresion
*/
#include <stdio.h>

#define PI 3.14159
#define area_tri(b, h) ( ((b) * (h)) / 2.0 )
#define X 160

int main () {
    printf("Valor de PI: %f \n", PI );
    printf("Area de triangulo : %f \n", area_tri(1 + 3, 2 * 3 + 4));

    #ifdef X
    #if X > 150
    printf("X mayor que 150");
    #elif X > 100
    printf("X mayor que 100");
    #else
    printf("X menor o igual a 100");
    #endif
    #endif
    printf("\n");
}


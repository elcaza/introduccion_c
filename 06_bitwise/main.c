#include <stdio.h>
int main()
{
    // a = 5(00000101), 
    // b = 9(00001001)
    unsigned char a = 5, b = 9;
    printf("1) a = %d, b = %d\n", a, b);

    // AND => The result is 00000001
    printf("2) a&b = %d\n", a & b);
 
    // OR => The result is 00001101
    printf("3) a|b = %d\n", a | b);
 
    // XOR => The result is 00001100
    printf("4) a^b = %d\n", a ^ b);
 
    // NOT => The result is 11111010
    printf("5) ~a = %d\n", a = ~a);
 
    // left shift => The result is 00010010
    printf("6) b<<1 = %d\n", b << 1);
 
    // right shift =>The result is 00000100
    printf("7) b>>1 = %d\n", b >> 1);
 
    return 0;
   
}
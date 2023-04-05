#include <stdio.h>

int main()
{
    char c;   // character
    short s;  // short int
    int i;    // integer
    long l;   // long int
    float f;  // floating-point
    double d; // double precision floating-point

    /*
    # A format specifier follows this prototype
    - %[flags][width][.precision][length]specifier
    ## specifier
    - [i] or [d]: Signed decimal integer
    ## length
    - [z]: size_t
    */
    printf("char:   %zd Byte(s) \n", sizeof(c));
    printf("short:  %zd Byte(s) \n", sizeof(s));
    printf("int:    %zd Byte(s) \n", sizeof(i));
    printf("long:   %zd Byte(s) \n", sizeof(l));
    printf("float:  %zd Byte(s) \n", sizeof(f));
    printf("double: %zd Byte(s) \n", sizeof(d));

    return 0;
}

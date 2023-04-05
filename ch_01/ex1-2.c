/* < Input_ex1-2.txt */

#include <stdio.h>

int main()
{
    int a = 0;
    printf("Enter an integer: ");
    scanf("%d", &a); // need reference operator
    printf("The integer you entered was %d", a);

    return 0;
}

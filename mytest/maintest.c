#include <stdio.h>

char mytest(unsigned int a, unsigned int b);

int main()
{
    printf("mytest(3, 5)=%i\n", mytest(3, 5));
    printf("mytest(3, 3)=%i\n", mytest(3, 3));
    printf("mytest(3, 1)=%i", mytest(3, 1));
    return 0;
}
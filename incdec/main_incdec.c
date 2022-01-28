#include <stdio.h>

long long incone(long long a);
long long decone(long long a);

int main()
{
    printf("incone(3)=%lld\n", incone(3));
    printf("decone(3)=%lld", decone(3));
    return 0;
}
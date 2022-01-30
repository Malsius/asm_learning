#include <stdio.h>

long long myfactorial(long long a);

long long wrap_myfactorial(long long a)
{
    if (a == 0)
        return 1;
    else
        return myfactorial(a);
}

int main()
{
    printf("wrap_myfactorial(3)=0x%llx\n", wrap_myfactorial(3));
    printf("wrap_myfactorial(4)=0x%llx\n", wrap_myfactorial(4));
}
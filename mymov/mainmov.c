#include <stdio.h>

long long mymov(long long a);

int main()
{
    printf("mymov(0xABCD)=0x%llx", mymov(0xABCD));
    return 0;
}
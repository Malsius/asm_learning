#include <stdio.h>

long long mybyte(long long a);

int main()
{
    printf("mybyte(0xABCD)=0x%llx", mybyte(0xABCD));
    return 0;
}
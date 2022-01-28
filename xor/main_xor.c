#include <stdio.h>

long long xor(long long a, long long b);

int main()
{
    printf("xor(0xAA, 0xBB)=0x%llx", xor(0xAA, 0xBB));
    return 0;
}
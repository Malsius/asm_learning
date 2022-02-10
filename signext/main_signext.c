#include <stdio.h>

unsigned long long ushort2ulong(unsigned short a);
unsigned long long uint2ulong(unsigned int a);
long long int2long(int a);

#define MYMAX16 0xFFFF
#define MYMAX32 0xFFFFFFFF

int main()
{
    printf("unsigned %llx\n", ushort2ulong(MYMAX16));
    printf("unsigned %llx\n", uint2ulong(MYMAX32));
    printf("signed %llx\n", int2long(MYMAX32));
    return 0;
}

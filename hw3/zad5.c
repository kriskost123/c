#include <stdio.h>
#include <stdint.h>

unsigned onesCount(uint64_t mask)
{
   unsigned int count=0;
for(unsigned i=0;i<=63;i++)
{
    if(!!(mask & (1<<i)))
    {
        count++;
    }


}
return count;
}

int main()
{
    uint64_t mask;
    scanf("%ld", &mask);
    printf("ones: %d\n",onesCount(mask));
    return 0;
}
#include <stdio.h>


unsigned char Checkbit(unsigned int uValue);

int main()
{
unsigned int a;
scanf("%u", &a);
printf("%x\n", Checkbit(a));

return 0;
}

unsigned char Checkbit(unsigned int uValue)
{
    int count=0;

    for (int i = 0; i < 16; i++)
    {
         if (uValue &(1<<i))
         {
             count++;
         }
    }
    return count==1 ? 1 : 0;
}
#include <stdio.h>


void bubble(int *pArray,unsigned int uLen);

int main()
{


}

void bubble(int *pArray,unsigned int uLen)
{
for (int i = 0; i < uLen-1; i++)
{
if (pArray[i]>pArray[i+1])
{
    pArray[i] ^= pArray[i+1];
    pArray[i+1] ^=pArray[i];
    pArray[i] ^=pArray[i+1];
}


}


}

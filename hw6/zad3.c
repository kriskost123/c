#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Vmirror(unsigned char* pImage);

int main()
{
    char image[]={0x7F,0x40,0x40,0x040,0x7F,0x00,0x00,0x00};
    Vmirror(image);
    for (int i = 0; i < 8; i++)
    {
        printf("%d ",atohex(image[i])); 
    }
    putchar('\n');
    return 0;
}


void Vmirror(unsigned char* pImage)
{
    int mirror=0;
    for(int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (!!(pImage[i] & (1<<j)))
            {
              mirror |= 1<<(7-j);
            }
            
        }
        pImage[i]=mirror;
        mirror=0;
    } 
}
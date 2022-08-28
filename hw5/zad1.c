#include <stdio.h>

#define MAX(x,y,z) ( ( (x)>(y) && (x)>(z) ) ? (x) : ( (y)>(z) ) ? (y) : (z) )
#define MIN(x,y,z) ( ( (x)<(y) && (x)<(z) ) ? (x) : ( (y)<(z) ) ? (y) : (z) )
#define SETBIT(mask,bit) (mask) |= (1<<(bit))
#define CLEARBIT(mask,bit) (mask) &= ~(1<<(bit))
#define INVERSEBIT(mask,bit) (mask) ^= (1<<(bit))
#define CHECKBIT(mask,bit) !!((mask) & (1<<(bit)))
#define SWAP(a,b) {(a) ^= (b); (b) ^= (a); (a) ^=(b);}
int main()
{
    printf("%d\n",MAX(5,6,9));
    printf("%d\n",MIN(5,6,9));
    int mask=0;
    printf("%d\n",SETBIT(mask,3));
    printf("%d\n",CLEARBIT(mask,3));
    mask=-1;
    printf("%d\n",INVERSEBIT(mask,3));
    printf("%d\n",CLEARBIT(mask,3));
    int a=5;
    int b=1;
    printf("%d %d\n",a,b);
    SWAP(a,b);
    printf("%d %d\n",a,b);
    return 0;
}
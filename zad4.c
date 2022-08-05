#include <stdio.h>
#include <stdbool.h>
bool xor(int w,int x,int y)
{

if (w==0)
{
    if (x==0)
    {
        if (y==0) {return 0;}   
        else {return 1;} 
    }
    else if (y==0){return 1;} 
    else{return 0;}
 
}else //w=1
{
    if (x==0)
    {
        if (y==0) {return 1;}   
        else {return 0;}
    }
    else if (y==0){return 0;}
    else{return 1;}
}

}

int main()
{
int w,x,y;
printf("Enter 3 numbers for XOR operation: ");
scanf("%d %d %d", &w, &x, &y);
if ((w !=0 && w!=1) || (x !=0 && x!=1) || (y !=0 && y!=1) )
{
fprintf(stderr,"Bad numbers\n");
}
printf("XOR of w,x,y is: %d\n", xor(w,x,y) );
 return 0;
}
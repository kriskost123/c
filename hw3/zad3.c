#include <stdio.h>
#include <math.h>

int rectangle(double w, double h, double* S,double* P)
{
if(w<=0 || h<=0)
{
    printf("Invalid rectangle sides!\n");
    return -1;
}else
{
    *S=w*h;
    *P=2*w +2*h;
    printf("S= %lf\nP= %lf\n",*S, *P);
   return 0;
}

}


int main()
{
    double w,h,c,s=0,p=0;
    while(scanf("%lf %lf", &w, &h) != EOF)
    {
        rectangle(w,h,&s,&p);
    }



    return 0;
}




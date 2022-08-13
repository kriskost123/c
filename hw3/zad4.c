#include <stdio.h>
#include <math.h>
int quadEquation(double a, double b,double c, double* S,double* P)
{
if( (b*b) - (4*a*c) <0)
{
    printf("No real roots!\n");
    return -1;
}else
{
    double d=sqrt( (b*b) - (4*a*c) );
    *S= (b*(-1) + d)/(2*a);
    *P=(b*(-1) - d)/(2*a);
    printf("x1= %lf\nx2= %lf\n",*S, *P);
   return 0;
}

}


int main()
{
    double a,b,c,s=0,p=0;
    while(scanf("%lf %lf %lf", &a, &b, &c) != EOF)
    {
        quadEquation(a,b,c,&s,&p);
    }



    return 0;
}
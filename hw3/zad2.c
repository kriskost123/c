#include <stdio.h>
#include <math.h>
int triangle(double a, double b,double c, double* S,double* P)
{
if((a<=0 || b<=0 || c<=0) || (a+b<=c || a+c<=b || b+c<=a))
{
    printf("Invalid triangle sides!\n");
    return -1;
}else
{
    double s=(a+b+c)/2;
    *S=sqrt(s*(s-a)*(s-b)*(s-c));
    *P=a+b+c;
    printf("S= %lf\nP= %lf\n",*S, *P);
   return 0;
}

}


int main()
{
    double a,b,c,s=0,p=0;
    while(scanf("%lf %lf %lf", &a, &b, &c) != EOF)
    {
        triangle(a,b,c,&s,&p);
    }



    return 0;
}
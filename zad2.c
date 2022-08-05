#include <stdio.h>
#include <math.h>
#define PI 3.14

double cylA(double r,double h)
{
return PI*pow(r,2)*h;
}
double cylB(double r, double h,double l)
{
// double area= acos((r-h)/r) * pow(r,2) - (r-h)*pow(2*r*h-h*h,0.5);
return ( acos((r-h)/r) * pow(r,2) - (r-h)*pow(2*r*h - h*h, 0.5) ) * l;
}

int main()
{
double radius, height, length;
printf("Enter radius, height and length of cylinder: ");
scanf("%lf %lf %lf", &radius, &height, &length);
printf("Volume in standing position: %lf\n", cylA(radius,height));
printf("Volume in laying position: %lf\n", cylB(radius,height,length));
return 0;
}
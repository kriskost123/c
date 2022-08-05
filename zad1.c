#include <stdio.h>
#include <math.h>

double bmiOld(double mass,double height)
{
return mass/ (pow(height,2.0));
}
double bmiNew(double mass,double height)
{
return (1.3)*mass/ (pow(height,2.5));
}




int main()
{
double mass,height;
printf("Enter mass(kilos) and height(meters): ");
scanf("%lf %lf", &mass, &height);
printf("bmiOld: %lf \n",bmiOld(mass,height));
printf("bmiNew: %lf \n",bmiNew(mass,height));
return 0;
}
#include <stdio.h>
#define EPS 0.001
int main()
{
   float num1;
   float num2;
   float num3;
scanf("%f %f %f", &num1,&num2,&num3);

if (num1-num2>EPS && num1-num3 >EPS)
{
printf("Highest number: %f\n", num1);
}
if (num3-num1>EPS && num3-num2 >EPS)
{
printf("Highest number: %f\n", num3);
}
if (num2-num1>EPS && num2-num3 >EPS)
{
printf("Highest number: %f\n", num2);
}

return 0;
}
#include <stdio.h>
#include <math.h>


int main()
{
float a,b;
char op;

while(scanf("%f %c %f",&a, &op, &b) != EOF)
{

switch (op)
{
case '+':printf("%.2f\n", a+b);
    break;
case '-':printf("%.2f\n", a-b);
    break;
case 'x':printf("%.2f\n", a*b);
    break;
case '/':printf("%.2f\n", a/b);
    break;
default:fprintf(stderr,"Bad data\n");
    break;
}

}
return 0;
}

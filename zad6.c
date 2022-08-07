#include <stdio.h>
#include <math.h>
#include <stdbool.h>
void compare(float a, float b)
{
for(unsigned i=1; i<5;i++ )
{

    printf("a= %e\n b= %e\n",a,b);
    if(fabs(a-b)< pow(0.1,i))
    {
        printf("Equals\n");
    }else 
    {
        printf("Doesnt equal\n");
    }

}


}

void comparelf(double a, double b)
{
for(unsigned i=1; i<5;i++ )
{

    printf("a= %e\n b= %e\n",a,b);
    if(fabs(a-b)< pow(0.1,i))
    {
        printf("Equals\n");
    }else 
    {
        printf("Doesnt equal\n");
    }

}


}

int main()
{
float a= 100.0f;
float b=0.0f;

double c= 100.0;
double d=0.0;

for(unsigned i=0 ; i<1000 ; i++ , b+=0.1f, d+=0.1){}
compare(a,b);
comparelf(c,d);


return 0;
}
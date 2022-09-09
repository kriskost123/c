#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Add(const char* p1,const char* p2,char* result);

int main()
{
char result[50];
Add("12345","678",result);
printf("%s\n",result);
return EXIT_SUCCESS;
}

void Add(const char* p1,const char* p2,char* result)
{
int sum1= atoi(p1);
int sum2= atoi(p2);
if (sum1<0 || sum2<0)
{
    fprintf(stderr,"Only positive numbers!\n");
}
sprintf(result,"%d",(sum1+sum2));
}

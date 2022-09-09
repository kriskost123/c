#include <stdio.h>
#include <time.h>
#include <stdlib.h>
    int n=0;
    int m=0;
double sum(double* arr);
double max(double* arr);
double average(double* arr); 
int main()
{
    srand(time(0));
    scanf("%d",&n);
    double *arr=malloc(n*sizeof(double));
    for (int i = 0; i < n; i++)
    {
       arr[i]=1.0+ ((double)rand()/(RAND_MAX/(10.0-1.0)));
       printf("%lf ",arr[i]);
    }
    putchar('\n');
    scanf("%d",&m);
    arr= realloc(arr,(m+n)*sizeof(double));
    for (int i = 0; i < m+n; i++)
    {
       arr[i]=10.0+ ((double)rand()/(RAND_MAX/(20.0-10.0)));
       printf("%lf ",arr[i]);
    }
    putchar('\n');
    printf("Size %d\n",(m+n));
    printf("Sum of elements in array is: %lf\n", sum(arr));
    printf("Max element in array is: %lf\n", max(arr));
    printf("Average in array is: %lf\n", average(arr));
    free(arr);
    return 0;
}

double sum(double* arr)
{
    double sum=0;
 for (int i = 0; i < (m+n); i++)
 {
    sum +=arr[i];
 }
 
    return sum; 
}
double max(double* arr)
{
    double max=arr[0];
for (int i = 0; i < (m+n); i++)
 {
    if (arr[i]>max)
    {
        max=arr[i];
    }
    
 }
return max;
}
double average(double* arr)
{
    double sum=0;
    int av=(m+n);
    for (int i = 0; i < av; i++)
    {
        sum +=arr[i];
    }
    return sum/av; 

}
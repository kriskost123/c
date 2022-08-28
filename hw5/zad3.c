#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int n;
    scanf("%d",&n);
    float *arr= malloc(n*sizeof(float));
    for(int i=0;i<n;i++)
    {
        arr[i]= (float) rand() /RAND_MAX;
        printf("%f\n",arr[i]);
    }
    int m;
    scanf("%d",&m);
    arr=realloc(arr,m*sizeof(float));
    for(int i=0;i<m;i++)
    {
        arr[i]=1.0f +((float)rand() /(RAND_MAX/(2.0f-1.0f)));
        printf("%f\n",arr[i]);
    }
    int p;
    scanf("%d",&p);
    arr=realloc(arr,p*sizeof(float));
    for(int i=0;i<p;i++)
    {
        arr[i]=2.0f +((float)rand() /(RAND_MAX/(3.0f-2.0f)));
        printf("%f\n",arr[i]);
    }
    free(arr);
    return 0;
}
#include <stdio.h>
#include <string.h>

int secondMax(const int* arr, size_t n,int* secondMax);

int main()
{
    int sm;
    int arr[]={5,8,7,9};
    secondMax(arr,4,&sm);
    printf("Second max is %d\n", sm);
    return 0;
}

int secondMax(const int* arr, size_t n,int* secondMax)
{
    if(!n)
    {
        fprintf(stderr,"Empty string.\n");
        return 0;
    }
    
    if(n==1)
    {
        fprintf(stderr,"String with one element.\n");
        return 0;
    }
    int max=arr[0];
    *secondMax=arr[0];
    for(int i=1; i<n;i++)
    {
            if(arr[i]>max)
            {            
                *secondMax=max;
                max=arr[i];
            }
            if(arr[i]<max && arr[i]>*secondMax)
            {
                *secondMax=arr[i];
            }    }

    if(max== *secondMax)
    {
        fprintf(stderr,"String with identical elements.\n");
        return 0;
    }
}
#include <stdio.h>

unsigned sumArrayDigits(const int* arr,size_t n);
void digitSum(int n,int *sum);


int main()
{
    int arr[]={12,34,5,70};
    printf("Sum: %d\n", sumArrayDigits(arr,4));
    return 0;
}

unsigned sumArrayDigits(const int* arr,size_t n)
{
    int sum=0;
    int *s= &sum;
    for(int i=0;i<n;i++)
    {
        digitSum(arr[i],s);
    }
    return sum;
}

void digitSum(int n,int *sum)
{
    while(n/10)
    {
        *sum +=n%10;
        n /=10;
    }
    *sum +=n%10;
}
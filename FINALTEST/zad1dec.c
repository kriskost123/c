#include "zad1.h"
#include <stdio.h>

void print(char* arr,int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%c ", arr[i]);
    }
    putchar('\n');
}


int smallLetters(char* arr,int size)
{
    int count=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>='a' && arr[i]<='z')
        {
            count++;
        }
    }
    return count;
}


char occurence(char* arr,int n,int m, int k)
{
    int countArr[60]={0};
    for (int i = 0; i < n+m+k; i++)
    {
        if (i<n)
        {
            countArr[arr[i]-97]++;
        }
        if (i>=n && i<n+m)
        {
            countArr[26+arr[i]-65]++;
        }
       if (i>=n+m)
        {
            int offset=52;
           switch (arr[i])
        {
        case '!':
        countArr[offset]++;
        break;
        case '?':
        countArr[offset+1]++;
        break;
        case '$':
        countArr[offset+2]++;
        break;
        case '@':
        countArr[offset+3]++;
        break;
        case '*':
        countArr[offset+4]++;
        break;
        case '%':
        countArr[offset+5]++;
        break;
        case '-':
        countArr[offset+6]++;
        break;
        default:
        printf("unknown\n");
        break;
        }
       }
    }

    int max=0;

    for (int i = 0; i < sizeof(countArr)/sizeof(int); i++)
    {
        //printf("%d %d ",i, countArr[i]);
        if (countArr[i]> max)
        {
            max= countArr[i];
        }
        
    }

return max;
}
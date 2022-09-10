#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "zad1.h"

int main()
{
    int ch=0;
    srand(time(NULL));
    int n=0;
    scanf("%d",&n);
    char* arr= malloc(n*sizeof(char));
    if (arr==NULL)
    {
        fprintf(stderr,"Bad allocation\n");
        return EXIT_FAILURE;
    }
    
    for (int i = 0; i < n; i++)
    {
    arr[i]=97 + rand()%(26); 
   // printf("%c ", arr[i]);
    }
  //  putchar('\n');


    int m=0;
    scanf("%d",&m);
    arr= realloc(arr,(m+n)*sizeof(char));
    if (arr== NULL)
    {
        fprintf(stderr,"Bad realloc\n");
        return EXIT_FAILURE;
    }
    for (int i = n; i < m+n; i++)
    {
    arr[i]= 65+ rand()%(26);
   // printf("%c ", arr[i]);
    }
   // putchar('\n');


    int k=0;
    scanf("%d",&k);
    arr= realloc(arr,(k+m+n)*sizeof(char));
    if (arr== NULL)
    {
        fprintf(stderr,"Bad realloc2\n");
        return EXIT_FAILURE;
    }
    for (int i = m+n; i < k+m+n; i++)
    {
        ch=rand()%7;
        switch (ch)
        {
        case 0:
        arr[i]='!';
        break;
        case 1:
        arr[i]='?';
        break;
        case 2:
        arr[i]='$';
        break;
        case 3:
        arr[i]='@';
        break;
        case 4:
        arr[i]='*';
        break;
        case 5:
        arr[i]='%';
        break;
        case 6:
        arr[i]='-';
        break;
        default:
        printf("unknown\n");
        break;
        }
    //    printf("%c ", arr[i]);
    }
  //  putchar('\n');
    arr[k+m+n]='\0';
print(arr,k+m+n);
printf("Small letter count: %d\n",smallLetters(arr,k+m+n));
int occ=occurence(arr,n,m,k);
printf("Most occurences of element: %d\n",occ);
free(arr);
return EXIT_SUCCESS;
}
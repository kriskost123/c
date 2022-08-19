#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int mystrlen(const char* arr);
int mystrnlen(const char* arr, int n);

char* mystrcpy(char* dest,const char* source);
char* mystrncpy(char* dest,const char* source,int n);

char* mystrcat(char* dest, const char* source);
char* mystrncat(char* dest, const char* source,int n);

int mystrcmp(const char* str1,const char* str2);
int mystrncmp(const char* str1,const char* str2,int n);

char* mystrstr(const char* search,const char* find);
int main()
{
    char a[100]="firstsecondsearchthird";
    char b[]="x";
  // printf("%d\n", mystrlen(a));
  // printf("%d\n", mystrnlen(b,6));

  // printf("%s\n", mystrcpy(a,b));
  // printf("%s\n", mystrncpy(a,b,1));

 // printf("%s\n", mystrcat(a,b));
  //printf("%s\n", mystrncat(a,b,9));
  //printf("%d\n", mystrcmp(a,b));
 // printf("%d\n", mystrncmp(a,b,5));
   
    return 0;
}

int mystrlen(const char* arr)
{
    int count=0;
    while( *(arr+count))
    {
      count++;
    }
    return count;

}
int mystrnlen(const char* arr,int n)
{
   int count=0;
    while( *(arr+count) && n>0)
    {
        count++;
        n--;
    }
    return count;
}

char* mystrcpy(char* dest,const char* source)
{
    int i=0;
    while(( (dest[i]=source[i]) !='\0'))
    {
     i++;
    }
    return dest;
}
char* mystrncpy(char* dest, const char* source, int n)
{
    dest= (char*) malloc(n);
    for(int i=0; i<n; i++)
    {
        if(source[i]=='\0')
            {
        break;
            }
    dest[i]=source[i];

}
    return dest;
}

char* mystrcat(char* dest, const char* source)
{
    int end=mystrlen(dest)+mystrlen(source);
    int count=0;
    for  (int i = mystrlen(dest); i <= end; i++)
    {
        dest[i]=source[count];
        count++;
    }
    dest [end+1]='\0';

    return dest;
}

char* mystrncat(char* dest, const char* source,int n)
{
    int end=n+mystrlen(dest);
    int count=0;
    for  (int i = mystrlen(dest); i < end; i++)
    {
        if (source[count] == '\0')
        {
           break;
        }
        
        dest[i]=source[count];
        count++;
    }
    dest [end+1]='\0';

    return dest;

}


int mystrcmp(const char* str1,const char* str2)
{
    for (int i = 0; i < mystrlen(str1); i++)
    {
        if (str1[i] != str2[i])
            {
             return (str1[i]-str2[i]);
            }
    }

    return 0;

}
int mystrncmp(const char* str1,const char* str2,int n)
{ 
     for (int i = 0; i < n; i++)
    {
        if (str1[i] != str2[i])
            {
             return (str1[i]-str2[i]);
            }
    }

    return 0;

}

char* mystrstr(const char* search,const char* find)
{
    char *ptr=(char*)search;
    for (int i = 0; i < mystrlen(search); i++)
    {
        if (ptr[i]==find[0])
        {
            if(!mystrncmp((ptr+i),find,mystrlen(find)))
            {
                return (ptr+i);
            }
        }

    }
    return NULL;


}
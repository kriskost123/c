#include <stdio.h>
#include <string.h>

void SPRINTF(char* szBuffer,char* szPattern,const char** args)
{
    int count=0;
    int argCount=0;
    int argSmall=0;
    for (size_t i = 0; i < strlen(szPattern); i++)
    {
        if (szPattern[i]=='%' && szPattern[i+1]=='s')
        {
            while (args[argCount][argSmall])
            {
                 szBuffer[count]=args[argCount][argSmall];
                   count++;
                   argSmall++;
            }
            i +=2;
            argSmall=0;
            argCount++;
        }

        szBuffer[count]=szPattern[i];
        count++;
    }
}
int main()
{
    const char* args[]={"Arg1","Arg2","Arg3"};
    char szBuffer[100];
    SPRINTF(szBuffer,"This function takes %s and %s as arguments %s\n", args);
    printf("%s", szBuffer);
}
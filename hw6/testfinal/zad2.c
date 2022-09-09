#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
char number[500];
int i=0;
fgets(number,500,stdin);
for(int i=0;i<strlen(number)-1;i++)
    {
       if (i%2==0) 
       {
            switch (number[i])
            {
            case '0':
            number[i]='A';
            break;
            case '1':
            number[i]='B';
            break;
            case '2':
            number[i]='C';
            break;
            case '3':
            number[i]='D';
            break;
            case '4':
            number[i]='E';
            break;
            case '5':
            number[i]='F';
            break;
            case '6':
            number[i]='G';
            break;
            case '7':
            number[i]='H';
            break;
            case '8':
            number[i]='I';
            break;
            case '9':
            number[i]='J';
            break;
            default:
            fprintf(stderr,"Invalid character\n");
            break;
            }
        }else
            {
                switch (number[i])
                {
                case '0':
                number[i]='!';
                break;
                case '1':
                number[i]='#';
                break;
                case '2':
                number[i]='/';
                break;
                case '3':
                number[i]='~';
                break;
                case '4':
                number[i]='=';
                break;
                case '5':
                number[i]=44;
                break;
                case '6':
                number[i]=92;
                break;
                case '7':
                number[i]='>';
                break;
                case '8':
                number[i]='.';
                break;
                case '9':
                number[i]=',';
                break;
                default:
                fprintf(stderr,"Invalid character2\n");
                break;
                }
            }
        printf("%c",number[i]);
    }
putchar('\n');
return EXIT_SUCCESS;
}
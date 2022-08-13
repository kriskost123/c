#include <stdio.h>
#include <stdint.h>


int main()
{
uint32_t attendance = 0;
int option;
int bit;
while (1)
{
printf("1. Set Attendance\n");
printf("2. Clear Attendance\n");
printf("3. Info Attendance\n");
printf("4. Change Attendance\n");
printf("5. Exit\n");
scanf("%d", &option);
switch(option)
{
case 1: 
    printf("Which student do you want to set? \n");
    scanf("%d",&bit);
    attendance |= (1<<bit);
    break;
case 2: 
    printf("Which student do you want to clear? \n");
    scanf("%d",&bit);
    attendance &= ~(1<<bit);
    break;
case 3: 
    printf("Which student do you want to see? \n");
    scanf("%d",&bit);
    printf("%d\n",!!(attendance &(1<<bit)));
    break;
case 4: 
    printf("Which student do you want to change? \n");
    scanf("%d",&bit);
    attendance ^= (1<<bit);
    break;
case 5: 
    return 0;
    break;
default:
fprintf(stderr, "Invalid command.");
break;
}
}
    return 0;
}

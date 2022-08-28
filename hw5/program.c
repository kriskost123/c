#include <stdio.h>

void swap(int*,int*);

int main(void)
{
int num1,num2;
printf("Enter first number:");
scanf("%d\n",&num1);
printf("Enter second number:");
scanf("%d\n",&num2);
printf("Before swap: Number1 = %d, Number2 = %d\n",num1,num2);
swap(&num1,&num2);
printf("After swap: Number1 = %d, Number2 = %d\n",num1,num2);
return 0;
}
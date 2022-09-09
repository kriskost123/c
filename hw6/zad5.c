#include <stdio.h>
#define MAX_SIZE 10

    int arr[MAX_SIZE];
    int top=-1;
    int bottom=-1;
    int buffer=0;

int isEmpty();
int isFull();
void push(int nNewValue);
int pop();
int main()
{


    return 0;
}

int isEmpty()
{
    if (top==-1)
    {
       return 0;
    }
    return 1;
}
int isFull()
{
    if ( (top== bottom+1) || (top==0 && bottom==MAX_SIZE -1))
    {
    return 0;
    }
    return 1;
}
void push(int nNewValue)
{
    if (!isFull())
    {
        fprintf(stderr,"Buffer is full!\n");
    }else
    {
        if (!top)
        {
            top++;
        }
        bottom = (bottom+1)% MAX_SIZE;
        arr[bottom]= nNewValue;
    }
    

}
int pop()
{
if (!isEmpty())
{
    fprintf(stderr,"Buffer is empty!\n");
}else
{
    buffer=arr[top];
    if (top==bottom)
    {
        top=-1;
        bottom=-1;
    }else
    {
        top=(top+1) % MAX_SIZE;
    }

    return buffer;
}


}
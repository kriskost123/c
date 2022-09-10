#include <stdio.h>
#include <stdlib.h>
#include "zad3.h"

void push(node_t** head,uint64_t value)
{
    node_t* newNode=malloc(sizeof(node_t));
    newNode->data= value;
    newNode->next=*head;
    *head=newNode;
}

void printList(node_t* head)
{
    node_t* current=head;
    while (current != NULL)
    {
        printf("%ld\n", current->data);
        current=current->next;
    }
}


void maxElement(node_t* head,node_t* max)
{
    node_t* current=head;

    while (current !=NULL)
    {
       if (current->data > max->data)
       {
        max->data = current->data;
        max->next=current;
       }
       current= current->next;
    }
}

int bitCount(node_t* head)
{
    node_t* current=head;
    int count=0;
    while (current != NULL)
    {
        for (int i = 0; i < 8; i++)
        {
           count += !!(current->data & (1<<i));
          // printf("%d ", count);
        }
        current=current->next;
    }
    return count;

}

void listFree(node_t** head)
{
    node_t* current= *head;
    node_t* prev;
while (current !=NULL)
{
    prev=current;
    current= current->next;
    free(prev);
}
*head=NULL;
}
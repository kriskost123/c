#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#define COUNT 5
    typedef struct node
    {
    uint8_t data;
    struct node* next;
    } node_t;
    void push(node_t** head);
    void  printList(node_t* head);
    int endZero(node_t* head);
    int bitCount(node_t* head); 

int main()
{
    node_t* head=NULL;
    for (int i = 0; i < COUNT; i++)
    {
        push(&head);
    }
    printList(head);
    putchar('\n');
    printf("End with zero: %d\n", endZero(head));
    printf("1 bits count: %d\n", bitCount(head));

}

void push(node_t** head)
{
    srand(time(NULL));
    node_t* newNode=malloc(sizeof(node_t));
    newNode->data= rand()%100;
    newNode->next=*head;
    *head=newNode;
}
void  printList(node_t* head)
{
    node_t* current=head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current=current->next;
    }
    
}
int endZero(node_t* head)
{
    node_t* current=head;
    int count=0;
    while (current != NULL)
    {
        if (current->data %10==0)
        {
            count++;
        }
        
        current=current->next;
    }
return count;
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
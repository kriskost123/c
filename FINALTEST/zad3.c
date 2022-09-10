#include <stdio.h>
#include <time.h>
#include <stdint.h>
#include <stdlib.h>
#include "zad3.h"
int main()
{
    srand(time(NULL));
    node_t* head= NULL;
    for (int i = 0; i < COUNT; i++)
    {
       push(&head,rand()%RAND_MAX);
    }
    printList(head);
    node_t max;
    max.data=0;
    max.next=NULL;
    maxElement(head,&max);
    printf("Max element is : %ld\n", max.data);
    int count= bitCount(head);
    printf("Bit count: %d\n", count);
    listFree(&head);
    return EXIT_SUCCESS;
}

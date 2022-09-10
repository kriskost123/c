#pragma once
#define COUNT 10
#define RAND_MAX 2147483647
#include <stdint.h>
typedef struct node
{
uint64_t data;
struct node* next;

} node_t;

void push(node_t** head,uint64_t value);
void printList(node_t* head);
void maxElement(node_t* head,node_t* max);
int bitCount(node_t* head);
void listFree(node_t** head);
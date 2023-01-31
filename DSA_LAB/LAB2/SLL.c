#include <stdio.h>
#include <stdlib.h>

struct SLL
{
    int data;
    struct SLL *next;
};
typedef struct SLL NodeType;

NodeType *first, *last;

NodeType *createNode(int element)
{
    NodeType *NewNode;
    NewNode = (NodeType *)malloc(sizeof(NodeType));
    if (NewNode == NULL)
    {
        printf("Memory allocation failed!");
        return NewNode;
    }
    else
    {
        NewNode->data = element;
        NewNode->next = NULL;
        return NewNode;
    }
}

void insert(int element)
{
    NodeType *NewNode;
    NewNode = createNode(element);
    if (first == NULL)
    {
        first = last = NewNode;
        printf("Success\n");
    }
    else
    {
        NewNode->next = first;
        first = NewNode;
        printf("Success");
    }
}
void remove()
{
    NodeType *temp, *temp2;
    if (first == NULL)
    {
        printf("List Empty!!");
    }
    else if (first == last)
    {
        temp = first;
        first = last = NULL;
        free(temp);
    }
    else
    {
        temp=first;
        while (temp->next !=NULL)
        {
            temp=temp->next;
        }
        temp2 = temp-> next;
        printf("Deleted Item is %d \n", temp2->data);
        free(temp2);
        last= temp;
        printf("Success\n");
        
    }
}

void display(){
    NodeType *temp;
    if(first==NULL)
    {
        printf("List is EMPTY\n");

    }else{
        temp=first;
        do{
            printf("%d\t", temp->data);
            temp= temp->next;
        }while (temp->next != NULL);
    }
}
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
node *head = NULL;
// insertion at the begining
void enqueue()
{
    node *temp = (node *)malloc(sizeof(node));
    node *iter = head;
    printf("Enter a element you want to insert");
    scanf("%d", &temp->data);
    temp->next=NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
}
void dequeue()
{
    node *iter = head, *temp;
    if(head == NULL){
        printf("The queue is empty add some first");
    }else{
        while(iter->next != NULL){
            temp = iter;
            iter= iter->next;
        }
        temp->next = NULL;
    }
}

int main()
{
    enqueue();
    enqueue();
    dequeue();
    dequeue();
}
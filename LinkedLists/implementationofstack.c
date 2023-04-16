#include <stdio.h>
#include <stdlib.h>

// to perform stack implementation of linked list we can use like insertion at the begining at the push operation and delete at start as pop operation
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
node *head = NULL;

void push()
{
    int val;
    node *temp = (node *)malloc(sizeof(node));
    node *curr = head;
    printf("Enter a element you want to push into the stack!");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (temp == NULL)
    {
        printf("Memory allocation failed");
        return;
    }
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
void print()
{
    node *iter = head;
    if (head == NULL)
    {
        printf("List is Empty first add some");
        return;
    }
    while (iter != NULL)
    {
        printf("%d", iter->data);
        iter = iter->next;
    }
    printf("\n");
}
void pop()
{
    // like deletion from begining
    //  node* temp = head;
    if (head == NULL)
    {
        printf("the stack is empty first add some");
        return;
    }
    else
    {
        printf("%d is popped out from the stack\n", head->data);
        head = head->next;
    }
}

int main()
{
    push();
    push();
    push();
    print();
    pop();
    print();

    pop();
    print();
}
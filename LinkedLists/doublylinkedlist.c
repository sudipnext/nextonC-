#include <stdio.h>
#include <stdlib.h>

// creating a doubly linked list structure
struct Doubly
{
    int data;
    struct Doubly *prev;
    struct Doubly *next;
};
typedef struct Doubly node;

struct Doubly *head = NULL;
void InsertBegin();
void InsertEnd();
void InsertatNth();
void DeleteBegin();
void DeleteEnd();
void DeleteNth();
void Print();

int main()
{
    InsertBegin();
    InsertBegin();
    InsertBegin();
    InsertBegin();
    InsertEnd();
    InsertatNth();
    Print();
    DeleteBegin();
    Print();
    DeleteEnd();
    Print();
    DeleteNth();
    Print();
    return 0;
}
void Print()
{
    struct Doubly *curr = head;
    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

void InsertBegin()
{
    // creating a temporary variable
    node *temp = (node *)malloc(sizeof(node));
    node *curr = head;
    printf("Enter a Data You want to store?\n");
    scanf("%d", &temp->data);
    temp->next = NULL;
    temp->prev = NULL;
    if (curr == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = curr;
        curr->prev = temp;
        head = temp;
    }
}
void InsertEnd()
{
    // creating a temporary variable
    node *temp = (node *)malloc(sizeof(node));
    node *curr = head;
    printf("Enter a Data You want to store?\n");
    scanf("%d", &temp->data);
    temp->next = NULL;
    temp->prev = NULL;
    if (curr == NULL)
    {
        head = temp;
    }
    else
    {

        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = temp;
        temp->prev = curr;
    }
}
void InsertatNth()
{
    node *temp = malloc(sizeof(node));
    node *temp2 = malloc(sizeof(node));
    node *curr = head;
    int pos;
    printf("Enter a Data You want to store and position?\n");
    scanf("%d %d", &temp->data, &pos);
    temp->next = NULL;
    temp->prev = NULL;
    if (curr == NULL)
    {
        head = temp;
    }
    else
    {
        for (int i = 0; i < pos - 2; i++)
        {
            curr = curr->next;
            if (curr->next = NULL)
            {
                printf("PositionNot Found!");
            }
        }
        temp2 = curr->next;
        curr->next = temp;
        temp->prev = curr;
        temp->next = temp2;
        temp2->prev = temp;
    }
}
void DeleteBegin()
{
    node *temp = head;
    if (temp == NULL)
    {
        printf("lIST IS EMPTY");
    }
    else
    {
        head = temp->next;
        temp->prev = NULL;
        free(temp);
    }
}

void DeleteEnd()
{
    node *curr = head, *temp;
    while (curr->next != NULL)
    {
        temp = curr;
        curr = curr->next;
    }
    temp->next = NULL;
}
void DeleteNth(){
    int pos;
    node* curr = head, *temp;
    printf("Which position you want to delete");
    scanf("%d", &pos);
    for(int i=0; i< pos-2; i++){
        curr = curr->next;
    }
    temp = curr->next;
    curr->next = curr->next->next;
    curr->prev->prev = curr->prev;
    free(temp);
}
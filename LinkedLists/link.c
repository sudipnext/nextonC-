#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node node;

node *head = NULL;

void insertatBegin()
{
    // allocating memory location for the node
    node *temp = (node *)malloc(sizeof(node));
    // getting data from the user
    printf("Enter a data you want to store");
    scanf("%d", &temp->data);
    temp->next = NULL;
    // checking if the temp is created or not
    if (temp == NULL)
    {
        printf("Out of Memory");
        return;
    }
    // if no element in the linked list
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
void printlinkedlist()
{
    node *iterator = head;
    while (iterator != NULL)
    {
        printf("%d", iterator->data);
        iterator = iterator->next;
    }
}
void insertionatend()
{
    node *iterator = head;
    node *temp = (node *)malloc(sizeof(node));

    printf("Enter the element you want to insert into the linked list");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (temp == NULL)
    {
        printf("out of memory");
        return;
    }
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        while (iterator->next != NULL)
        {
            iterator = iterator->next;
        }
        iterator->next = temp;
    }
}
void insertatnth()
{
    int pos;
    int i=0;
    node *iterator = head;
    node *temp = (node *)malloc(sizeof(node));
    if (temp == NULL)
    {
        printf("Out of memory");
        return;
    }
    printf("Enter a element you want to insert\n and it's position");
    scanf("%d%d", &temp->data, &pos);
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        for(i=0; i<pos-1; i++){
            iterator = iterator->next;
        }
        temp->next = iterator->next;
        iterator->next = temp;
    }
}
void deleteatbegin(){
    node* iterator = head;
    if(head == NULL){
        printf("the list is empty");
    }else{
        head = head->next;
    }
}

void deleteatnth(){
    int pos;
    node* iterator = head;
    node* temp = (node*)malloc(sizeof(node));
    if(temp == NULL){
        printf("Out of memory");
        return;
    }
    printf("Enter the position you want to delete");
    scanf("%d", &pos);
    if(head == NULL){
        head = head->next;
    }
    else{
        for(int i=0; i<pos-1; i++){
            iterator= iterator->next;
        }
        temp = iterator->next;
        iterator->next = iterator->next->next;

    }
    free(temp);
}
int main()
{
    insertatBegin();
    insertatBegin();
    insertionatend();
    insertatnth();
    printlinkedlist();

    deleteatnth();
    printlinkedlist();
}
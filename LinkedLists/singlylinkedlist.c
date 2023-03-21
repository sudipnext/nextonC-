#include <stdio.h>
#include <stdlib.h>
// defining different functions
void create();
void PrintLink();
void InsertBegin();
void InsertEnd();
void InsertNth();
void deleteBegin();
void deleteEnd();
void deleteNth();

// creating a struct
struct Node
{
    int data;
    struct Node *next;
};
// creating a head node and pointing it to Null
struct Node *Head = NULL;
int main()
{
    int choice;
    while (1)
    {
        printf("Enter Your choice? \n");
        printf("1.CREATE\n");
        printf("2.DISPLAY\n");
        printf("3.INSERT AT BEGINING\n");
        printf("4.INSERT AT END\n");
        printf("5.INSERT AT NTH\n");
        printf("6.DELETE AT BEGINING\n");
        printf("7.DELETE AT END\n");
        printf("8.DELETE AT NTH\n");
        printf("9.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            PrintLink();
            break;
        case 3:
            InsertBegin();
            break;
        case 4:
            InsertEnd();
            break;
        case 5:
            InsertNth();
            break;
        case 6:
            deleteBegin();
            break;
        case 7:
            deleteEnd();
            break;
        case 8:
            deleteNth();
            break;
        case 9:
            exit(0);
            break;
        default:
            break;
        }
    }

    return 0;
}
// writng functions
void create()
{
    struct Node *temp, *iterator = Head;
    temp = (struct Node *)malloc(sizeof(struct Node));

    if (temp == NULL)
    {
        printf("Out of Memory\n");
        exit(0);
    }
    printf("Enter the Value for the node");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (Head == NULL)
    {
        Head = temp;
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

void PrintLink()
{
    struct Node *temp = Head;
    if (Head == NULL)
    {
        printf("List is Empty first add some");
        return;
    }
    else
    {
        printf("The elements are\n");
        while (temp != NULL)
        {
            printf("%d", temp->data);
            temp = temp->next;
        }
    }
}

void InsertBegin()
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    if (temp == NULL)
    {
        printf("Out of memory");
        return;
    }
    printf("Enter the data for the node\n");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (Head == NULL)
    {
        Head = temp;
    }
    else
    {
        temp->next = Head;
        Head = temp;
    }
}

void InsertEnd()
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    struct Node *iterator = Head;
    if (temp == NULL)
    {
        printf("Out of Memory\n");
    }
    printf("Enter the data you want to insert\n");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (Head == NULL)
    {
        Head = temp;
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

void InsertNth()
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    struct Node *iterator = Head;
    int pos;
    if (temp == NULL)
    {
        printf("Out of Memory\n");
    }
    printf("Enter the Element you want to Insert and position\n");
    scanf("%d %d", &temp->data, &pos);
    temp->next = NULL;
    if (pos == 0)
    {
        // inserting at initially
        temp->next = Head;
        Head = temp->next;
    }
    else
    {
        for (int i = 0; i < pos - 1; i++)
        {
            iterator = iterator->next;
            if (iterator == NULL)
            {
                printf("Position Not Found!");
                return;
            }
        }
        temp->next = iterator->next;
        iterator->next = temp;
    }
}

void deleteBegin()
{
    struct Node *iterator = Head;
    if (Head == NULL)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        Head = Head->next;
        printf("The deleted element is %d", iterator->data);
    }
}

void deleteEnd()
{
    struct Node *temp, *iterator = Head;
    if (Head == NULL)
    {
        printf("List is empty!\n");
        exit(0);
    }
    else if (Head->next == NULL)
    {
        Head = NULL;
        printf("The deleted element is %d", iterator->data);
        free(iterator);
    }
    else
    {
        while (iterator->next != NULL)
        {
            temp = iterator;
            iterator = iterator->next;
        }
        temp->next = NULL;
        printf("The deleted element is %d", iterator->data);
        free(iterator);
    }
}
void deleteNth()
{
    int i, pos;
    struct Node *temp, *current = Head;
    if (Head == NULL)
    {
        printf("The List is Empty\n");
        exit(0);
    }
    else
    {
        printf("Enter the position you want to delte the node");
        scanf("%d", &pos);
        if (pos == 0)
        {
            // apply delete at the begining logic
            Head = Head->next;
            printf("The deleted element is %d", current->data);
            free(current);
        }
        else
        {
            for (i = 0; i < pos - 1; i++)
            {
                current = current->next;
                if (current == NULL)
                {
                    printf("Position Not Found");
                    return;
                }
            }
            temp = current->next;
            current->next = current->next->next;
            // temp->next = current->next;
            printf("The deleted element is %d", temp->data);
            free(temp);
        }
    }
}

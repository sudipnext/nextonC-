#include <stdio.h>
#include <stdlib.h>

struct poly
{
    int coeff, pow;
    struct poly *next;
};

typedef struct poly node;

struct poly *phead1 = NULL;
struct poly *phead2 = NULL;
struct poly *final = NULL;

void createpoly(node **head)
{

    // allocating the memory for a temporary variable
    node *temp = (node *)malloc(sizeof(node));
    node *current = phead1;
    if (temp == NULL)
    {
        printf("Out of memory");
        return;
    }
    // getting user input
    printf("Enter the coeff and exponent of polynomial");
    scanf("%d%d", &temp->coeff, &temp->pow);
    temp->next = NULL;
    // checking whether there is a more component
    if (*head == NULL)
    {
        *head = temp;
    }
    else
    {

        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = temp;
    }
}
void print(node *head)
{
    node *current = head;
    if (head == NULL)
    {
        printf("List is Empty first add some");
        return;
    }
    while (current != NULL)
    {
        printf("%dx^%d ", current->coeff, current->pow);

        current = current->next;
    }
    printf("\n");
}
void subtract(node **first, node **second, node **add)
{
    node *ptr1 = *first, *ptr2 = *second;
    node *temp, *tail;

    while (ptr1 != NULL || ptr2 != NULL)
    {
        // creating a new node
        temp = (node *)malloc(sizeof(node));
        if (temp == NULL)
        {
            printf("Out of memory");
            return;
        }
        temp->next = NULL;

        // initial case to check if one of the polynomial doesnt exists;
        if (ptr1 == NULL)
        {
            temp->coeff = -(ptr2->coeff);
            temp->pow = ptr2->pow;
            ptr2 = ptr2->next;
        }
        else if (ptr2 == NULL)
        {
            temp->coeff = ptr1->coeff;
            temp->pow = ptr1->pow;
            ptr1 = ptr1->next;
        }
        // NOW LETS CHECK FOR WHICH POLYNOMIAL IS GREATER OR WHAT
        else if (ptr1->pow > ptr2->pow)
        {
            temp->coeff = ptr1->coeff;
            temp->pow = ptr1->pow;
            ptr1 = ptr1->next;
        }
        else if (ptr2->pow > ptr1->pow)
        {
            temp->coeff = -(ptr2->coeff);
            temp->pow = ptr2->pow;
            ptr2 = ptr2->next;
        }
        // if equal
        else
        {
            temp->coeff = ptr1->coeff - ptr2->coeff;
            temp->pow = ptr1->pow;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }

        if (*add == NULL)
        {
            *add = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
}


int main()
{
    for (int i = 0; i < 3; i++)
    {
        createpoly(&phead1);
    }
    for (int i = 0; i < 3; i++)
    {
        createpoly(&phead2);
    }
    print(phead1);
    printf("\n");
    print(phead2);
    printf("\n");

    subtract(&phead1, &phead2, &final);
    print(final);
    return 0;
}

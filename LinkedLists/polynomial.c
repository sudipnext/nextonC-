#include <stdio.h>
#include <stdlib.h>

struct poly
{
    int coeff, pow;
    struct poly *next;
};

struct poly *phead1 = NULL;
struct poly *phead2 = NULL;
struct poly *final = NULL;

void Create(struct poly **head);
void Print(struct poly *head);
void addPolynomial(struct poly **first, struct poly **second, struct poly **add);
int main()
{
    printf("Enter the First Polynomial\n");
    for (int i = 0; i < 3; i++)
    {
        Create(&phead1);
    }
    printf("Now enter for next polynomial\n");
    for (int i = 0; i < 2; i++)
    {
        Create(&phead2);
    }
    Print(phead1);
    Print(phead2);
    addPolynomial(&phead1, &phead2, &final);
    Print(final);

    return 0;
}

void Create(struct poly **head)
{
    struct poly *curr = *head;
    struct poly *temp = (struct poly *)malloc(sizeof(struct poly));
    if (temp == NULL)
    {
        printf("Out of Memory\n");
        exit(0);
    }
    printf("Enter the coeff of the polynomial :- ");
    scanf("%d", &temp->coeff);
    printf("Enter the power of the polynomial:- ");
    scanf("%d", &temp->pow);

    temp->next = NULL;

    if (*head == NULL)
    {
        *head = temp;
    }
    else
    {
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = temp;
    }
}

void Print(struct poly *head)
{
    struct poly *curr = head;
    if (head == NULL)
    {
        printf("List is Empty first add some");
        return;
    }
    while (curr != NULL)
    {
        printf("%dx^%d ", curr->coeff, curr->pow);

        curr = curr->next;
    }
    printf("\n");
}

void addPolynomial(struct poly **first, struct poly **second, struct poly **add)
{
    struct poly *ptr1 = *first, *ptr2 = *second, *ptr3 = NULL;
    struct poly *result = NULL, *curr = NULL;
    
    while (ptr1 != NULL || ptr2 != NULL) {
        struct poly *temp = (struct poly*) malloc(sizeof(struct poly));
        if (temp == NULL) {
            printf("Out of Memory\n");
            exit(0);
        }
        temp->next = NULL;
//Different Cases Of Polynomials
        if (ptr1 == NULL) {
            temp->coeff = ptr2->coeff;
            temp->pow = ptr2->pow;
            ptr2 = ptr2->next;
        }
        else if (ptr2 == NULL) {
            temp->coeff = ptr1->coeff;
            temp->pow = ptr1->pow;
            ptr1 = ptr1->next;
        }
        else if (ptr1->pow > ptr2->pow) {
            temp->coeff = ptr1->coeff;
            temp->pow = ptr1->pow;
            ptr1 = ptr1->next;
        }
        else if (ptr1->pow < ptr2->pow) {
            temp->coeff = ptr2->coeff;
            temp->pow = ptr2->pow;
            ptr2 = ptr2->next;
        }
        else {
            temp->coeff = ptr1->coeff + ptr2->coeff;
            temp->pow = ptr1->pow;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }

        if (result == NULL) {
            result = temp;
            curr = temp;
        }
        else {
            curr->next = temp;
            curr = curr->next;
        }

        if (ptr3 == NULL) {
            *add = result;
        }
    }
}

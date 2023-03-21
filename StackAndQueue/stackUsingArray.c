#include <stdio.h>
#include <stdlib.h>
#define n 10
#define true 1
#define false 0

struct stack
{
    int N[n];
    int TOP;
};
// Implementing different stack operations
void push(struct stack *s, int val);
void pop();
void display();
int isEmpty(struct stack *s);
int isFull(struct stack *s);

int main()
{
    
    int choice, val;
    struct stack s;
    s.TOP =-1;
    printf("%d",isEmpty(&s));
    while (choice != 4)
    {
        printf("Enter something \n 1.PUSH \n 2.POP \n 3.DISPLAY \n 4.EXIT");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter a element you want to push into the stack\n");
            scanf("%d", &val);
            push(&s, val);
            break;
        case 2:
            pop(&s);
        case 3:
            display(&s);
        }
    }
}

void push(struct stack *s, int val)
{
    if (!isFull(s))
    {
        s->TOP++;
        s->N[s->TOP] = val;
        printf("\n%d is pushed", s->N[s->TOP]);
    }
}
void pop(struct stack *s)
{
    if (!isEmpty(s))
    {
        printf("\n%d is popped from stack", s->TOP);
        s->TOP--;
    }
}
int isEmpty(struct stack *s)
{
    if (s->TOP == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int isFull(struct stack *s)
{
    if (s->TOP == n - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void display(struct stack *s)
{
    for (int i = s->TOP; i >=0; i--)
    {
        printf("%d", s->N[i]);
    }
}

#include <stdio.h>
#define MAX 5
#define true 1
#define false 0

struct Stack
{
    int top;
    int data[MAX];
};

int isFull(struct Stack *Q)
{
    if (Q->top == MAX - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int isEmpty(struct Stack *Q)
{
    if (Q->top == -1){
        return true;
    }else{
        return false;
    }
}
void push(struct Stack *Q, int num)
{
    if(!isFull(Q)){
        Q->top +=1;
        Q->data[Q->top] = num;
        printf("Sucess!");
    }else{
        printf("Stack OVERFLOW!");
    }
}
int pop(struct Stack *Q)
{
    int element;
    if(!isEmpty(Q)){
        element = Q->data[Q->top];
        Q->top -=1;
        return element;

    }
}

int main()
{
    int number, element;
    struct Stack S;
    S.top = -1;

    printf("What do you want to do?\n");
    printf("1.PUSH \n");
    printf("2.POP \n");
    printf("3.Exit \n");
    scanf("%d", &number);
    switch (number)
    {
    case 1:
        scanf("%d", &element);
        push(&S, element);
        printf("Elements are pushed sucessfully");
        break;

    case 2:
        printf("The %d is popped", pop(&S));
        break;
    case 3:
        printf("Exit!");
        return 0;
    }
    return 0;
}
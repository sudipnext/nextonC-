#include <stdio.h>
#define n 5
// circular queue resolves one of the major problems of the linear queue
struct circularQueue
{
    int N[5];
    int rear, front;
};
void enqueue(struct circularQueue *c);
void dequeue(struct circularQueue *c);
void display(struct circularQueue *c);

int main()
{
    struct circularQueue c;
    c.front, c.rear = -1;
    int choice;
    while (choice != 4)
    {
        printf("Enter something \n 1.Enqueue \n 2.Dequeue \n 3.DISPLAY \n 4.EXIT");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue(&c);
            break;
        case 2:
            dequeue(&c);
        case 3:
            display(&c);
        }
    }
}

void enqueue(struct circularQueue *c)
{
    int val;
    if ((c->rear + 1) % n == c->front)
    {
        printf("Queue is Full!");
    }
    else
    {
        printf("What value you want to push into this\n");
        scanf("%d", &val);
        c->N[c->rear] = val;
        c->rear = (c->rear + 1) % n;
    }
}
void dequeue(struct circularQueue *c)
{
    int d;
    if (c->front == -1)
    {
        printf("Queue is empty");
    }
    else
    {
        if (c->front == c->rear)
        {
            c->front = -1;
            c->rear = -1;
        }
        c->front = (c->front + 1) % n;
    }
}
void display(struct circularQueue *c)
{
    int i;
    for (;i != c->rear; i=(i+1)%n)
    {
        printf("%d", c->N[i]);
    }
    printf("\n");
}
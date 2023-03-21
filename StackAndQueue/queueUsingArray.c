#include <stdio.h>
#include <stdlib.h>
#define n 5

struct queue
{
    int N[n];
    int front, rear;
};

void enqueue(struct queue *);
void dequeue(struct queue *);
void display(struct queue *);

int main()
{
    struct queue q;
    q.front = 0;
    q.rear = -1;
    int choice;
    while (choice != 4)
    {
        printf("Enter something \n 1.Enqueue \n 2.Dequeue \n 3.DISPLAY \n 4.EXIT");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue(&q);
            break;
        case 2:
            dequeue(&q);
        case 3:
            display(&q);
        }
    }
}
void enqueue(struct queue *q)
{
    int val;
    if (q->rear == n - 1)
    {
        printf("Queue is Full!");
    }
    else
    {
        printf("Enter a value you want to enqueue?");
        scanf("%d", &val);
        q->rear++;
        q->N[q->rear] = val;
    }
}
void dequeue(struct queue *q)
{
    if (q->front > q->rear)
    {
        printf("Queue is Empty");
    }
    else
    {
        q->front++;
        printf("%d is dequeued", q->front);
    }
}
void display(struct queue *q)
{
    for (int i = q->front; i <= q->rear; i++)
    {
        printf("%d", q->N[i]);
    }
}
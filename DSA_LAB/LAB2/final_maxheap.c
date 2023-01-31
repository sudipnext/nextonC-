#include <stdio.h>
#define n 5
// initializing a queue
int queue[n];
int front = 0;
int back = 0;
// initializing functions
void swap(int *a, int *b);
void heapify(int array[], int size, int i);
void enqueue(int data);
int dequeue();
void print(int array[], int size);

int main()
{
    int choice, num;
    while (choice != 4)
    {
        printf("1. Enqueue 2. Dequeue 3. Print 4. Quit\n");
        printf("Give your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter a number you want to Enqueue\n");
            scanf("%d", &num);
            enqueue(num);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            print(queue, n);
            break;
        case 4:
            return 1;
        }
    }
}

void enqueue(int data)
{
    // Checks if queue is full
    if (back == n)
    {
        printf("Cannot enter more queue is full! ");
    }
    queue[back] = data;
    back = back + 1;
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(queue, n, i);
    }
}
void heapify(int array[], int size, int i)
{
    if (size == 1)
    {
        printf("Single element in the heap");
    }
    else
    {
        // Finding the largest among root, left child and right child
        int largest = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        if (l < size && array[l] > array[largest])
            largest = l;
        if (r < size && array[r] > array[largest])
            largest = r;

        // Swapping and continue heapifying if root is not largest
        if (largest != i)
        {
            swap(&array[i], &array[largest]);
            heapify(array, size, largest);
        }
    }
}
int dequeue()
{

    // Checks if queue is empty
    if (front == back)
    {
        return 0;
    }
    else
    {
        int size = sizeof(queue);
        for (int b = 0; b < size - 1; b++)
        {
            queue[b] = queue[b + 1];
        }
        // Decrement the size as one element is deleted
        size--;
    }
}
void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

void print(int array[], int size)
{
    for (int i = 0; i < size; ++i)
        printf("%d ", array[i]);
    printf("\n");
}
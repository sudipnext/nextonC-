// Priority Queue implementation in C
#include <stdio.h>
#define n 5

// The queue is created and front and back are initialised
int queue[n];
int back  = 0;
int front = 0;

int size = 0;
// function to swap
void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
// Function to heapify the tree
void heapify(int array[], int size, int i)
{
    if (size == 1)
    {
        printf("Single element in the heap");
    }
    else
    {
        // Find the largest among root, left child and right child
        int largest = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        if (l < size && array[l] > array[largest])
            largest = l;
        if (r < size && array[r] > array[largest])
            largest = r;

        // Swap and continue heapifying if root is not largest
        if (largest != i)
        {
            swap(&array[i], &array[largest]);
            heapify(array, size, largest);
        }
    }
}
// inserting as enqueue

// Function to insert an element into the tree
void insert(int array[], int newNum)
{
    if (size == 0)
    {
        array[0] = newNum;
        size += 1;
    }
    else
    {
        array[size] = newNum;
        size += 1;
        for (int i = size / 2 - 1; i >= 0; i--)
        {
            heapify(array, size, i);
        }
    }
}

// Function to delete an element from the tree
void deleteRoot(int array[], int num)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (num == array[i])
            break;
    }

    swap(&array[i], &array[size - 1]);
    size -= 1;
    for (int i = size / 2 - 1; i >= 0; i--)
    {
        heapify(array, size, i);
    }
}

// Print the array
void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
        printf("%d ", array[i]);
    printf("\n");
}

// Driver code
int main()
{
    int choice, num;
    while (choice != 4)
    {
        printf("1. Enqueue 2. Dequeue 3. Print 0. Quit\n");
        printf("Give your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            // The number added to the queue is taken as input
            printf("Enter number to enqueue: ");
            scanf("%d", &num);
            if (enqueue(num))
                printf("Enqueue operation successful");
            else
                printf("Queue is full");
            break;

        case 2:
            num = dequeue();
            if (num)
                printf("Data => %d", num);
            else
                printf("Queue is empty");
            break;

        case 3:
            print();
            break;

        case 0:
            exit(0);

        default:
            printf("Invalid choice");
        }
        printf("\n");
    }

    int array[10];

    insert(array, 3);
    insert(array, 4);
    insert(array, 9);
    insert(array, 5);
    insert(array, 2);

    printf("Max-Heap array: ");
    printArray(array, size);

    deleteRoot(array, 4);

    printf("After deleting an element: ");

    printArray(array, size);
}
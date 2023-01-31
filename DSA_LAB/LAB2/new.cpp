//Max Heap as a priority Queue
#include<iostream>
using namespace std;

//functions 
//function for inserting to the queue
void enqueue(int arr[], int *i);

void doHeapify(int arr[], int n, int i);
//function for swapping 
void swap(int *x, int *y);
//function to show or display
void show(int arr[], int *i);
// function to removing from priority queue
void dequeue(int arr[], int *i);
// sorting
void HeapSort(int arr[], int n);


int main()
{
    int choice, arr[10],i = 0;
    while (choice != 4)
    {
        cout<< "1.Enqueue\n";
        cout<< "2.Dequeue\n";
        cout<< "3.View\n";
        cout<< "4.Exit\n";
        cout<< "What you want to do: ";
        cin>> choice;
        switch (choice)
        {
            case 1:
                cout<< "Enqueue\n";
                enqueue(arr,&i);
                break;
            case 2:
                cout<< "Dequeue\n";
                dequeue(arr,&i);
                break;
            case 3:
                cout<< "View\n";
                show(arr,&i);
                break;
            case 4:
                cout<< "Exit\n";
                break;
            default:
                cout<< "Not Valid\n";
                break;
        }
    }
    return 0;
    
}
void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        doHeapify(arr, n, i);
    
    // extracting element from the heap
    for (int i=n-1; i>=0; i--)
    {
        // swapping
        swap(arr[0], arr[i]);
        doHeapify(arr, i, 0);
    }
}


void enqueue(int arr[], int *i)
{
    cout<< "Enter a num: ";
    cin>> arr[*i];
    heapSort(arr, *i);
    *i = *i + 1;
}

void doHeapify(int arr[], int n, int i)
{
    int maxIndex = i; // Initialize i as maxindex
    int leftChild = 2*i+1; // leftChild = 2*i + 1
    int rightChild = 2*i + 2; // rightChild = 2*i + 2
    
    // If leftChild is larger than root i.e topmost element in heap
    if (leftChild < n && arr[leftChild] > arr[maxIndex])
        maxIndex = leftChild;
    
    // If rightChild is larger than largest so far
    if (rightChild < n && arr[rightChild] > arr[maxIndex])
        maxIndex = rightChild;
    
    // If maxindex is not equal to i
    if (maxIndex != i)
    {
        swap(arr[i], arr[maxIndex]);
        
        //Calling doHeapify with recursion
        doHeapify(arr, n, maxIndex);
    }
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void show(int arr[], int *i)
{
    for (int j = 0; j < *i; j++)
    {
        cout<< arr[j] << endl;
    }
    cout<< endl;
}

void dequeue(int arr[], int *i)
{
    int temp = arr[0];
    *i = *i - 1;
    arr[0] = arr[*i];
    arr[*i] = temp;
    doHeapify(arr, *i, 0);
}

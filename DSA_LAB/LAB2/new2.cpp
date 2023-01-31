#include<iostream>
using namespace std;

// struct Array
// {
//     int *arr;
//     int *priority;
// }array;

void enqueue(int arr[], int *i);
void heapify(int arr[], int n, int i);
void swap(int *a, int *b);
void display(int arr[], int *i);
void dequeue(int arr[], int *i);
void HeapSort(int arr[], int n);

int main()
{
    int caseNum, Arr[10],i = 0;
    while (caseNum != 4)
    {
        cout<< "1. Enqueue" << endl;
        cout<< "2. Dequeue" << endl;
        cout<< "3. Display" << endl;
        cout<< "4. Exit" << endl;
        cout<< "Enter your choice: ";
        cin>> caseNum;
        switch (caseNum)
        {
            case 1:
                cout<< "Enqueue" << endl;
                enqueue(Arr,&i);
                break;
            case 2:
                cout<< "Dequeue" << endl;
                dequeue(Arr,&i);
                break;
            case 3:
                cout<< "Display" << endl;
                display(Arr,&i);
                break;
            case 4:
                cout<< "Exit" << endl;
                break;
            default:
                cout<< "Invalid choice" << endl;
                break;
        }
    }
    return 0;
    
}

void enqueue(int arr[], int *i)
{
    cout<< "Enter the number: ";
    cin>> arr[*i];
    // *i = *i + 1;
    // cout<< "Enter the priority: ";
    // cin>> array.priority;
    HeapSort(arr, *i);
    *i = *i + 1;
}
void HeapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    
    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);
        
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

void heapify(int arr[], int n, int i)
{
    // cout << i << endl<<n<<endl;
    int largest = i; // Initialize largest as root
    int l = 2*i+1; // left = 2*i + 1
    int r = 2*i + 2; // right = 2*i + 2
    
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
    
    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
    
    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display(int arr[], int *i)
{
    // cout<<*i<<endl;
    for (int j = 0; j < *i; j++)
    {
        cout<< arr[j] << " ";
    }
    cout<< endl;
}

void dequeue(int arr[], int *i)
{
    int temp = arr[0];
    *i = *i - 1;
    arr[0] = arr[*i];
    arr[*i] = temp;
    // *i = *i - 1;
    heapify(arr, *i, 0);
    // *i = *i - 1;
}
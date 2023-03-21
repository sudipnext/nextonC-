#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;
using namespace chrono;

// Function to calculate
// Fibonacci series

void input(int A[], int n);
void display(int A[], int n);
void bubbleSort(int A[], int n);
int partition(int array[], int low, int high);
void quickSort(int array[], int low, int high);
void selectionSort(int arr[], int n);
int timeCalc(time_point<system_clock> start, time_point<system_clock> end, string name);
int main()
{
    int arr[10000], n, choice;
    // Using time point and system_clock
    // Getting random input of array

    time_point<system_clock> b_start, b_end, q_start, q_end, s_start, s_end;

    cout << "Enter the no. of array";
    cin >> n;
    while (choice != 4)
    {
        input(arr, n);
        cout << "Here is the Random Array Initially" << endl;
        display(arr, n);
        cout << "Which Sorting Algorithm You want to Use" << endl
             << "1.BubbleSort\n2.QuickSort\n3.SelectionSort\n4.Exit\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            b_start = system_clock::now();
            bubbleSort(arr, n);
            cout << "After BubbleSort";
            display(arr, n);
            b_end = system_clock::now();
            timeCalc(b_start, b_end, "BubbleSort");
            break;
        case 2:
            q_start = system_clock::now();
            quickSort(arr, 0, n - 1);
            display(arr, n);
            q_end = system_clock::now();
            // // QuickSort
            // input(arr, n);
            // display(arr, n);
            timeCalc(q_start, q_end, "QuickSort");
            break;
        case 3:
            s_start = system_clock::now();
            selectionSort(arr, n);
            display(arr, n);
            s_end = system_clock::now();
            // SelectionSort
            timeCalc(s_start, s_end, "SelectionSort");
            break;
        }
    }
}

// Bubble Sort

void input(int A[], int n)
{
    // srand(time(0));
    for (int i = 0; i < n; i++)
    {
        A[i] = rand() % 100;
    }
    cout << endl;
}

void display(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(A[j], A[j + 1]);
            }
        }
    }
}

// Quick Sort
int partition(int array[], int low, int high)
{

    // select the rightmost element as pivot
    int pivot = array[high];

    // pointer for greater element
    int i = (low - 1);

    // traverse each element of the array
    // compare them with the pivot
    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {

            // if element smaller than pivot is found
            // swap it with the greater element pointed by i
            i++;

            // swap element at i with element at j
            swap(array[i], array[j]);
        }
    }

    // swap pivot with the greater element at i
    swap(array[i + 1], array[high]);

    // return the partition point
    return (i + 1);
}

void quickSort(int array[], int low, int high)
{
    if (low < high)
    {

        // find the pivot element such that
        // elements smaller than pivot are on left of pivot
        // elements greater than pivot are on righ of pivot
        int pi = partition(array, low, high);

        // recursive call on the left of pivot
        quickSort(array, low, pi - 1);

        // recursive call on the right of pivot
        quickSort(array, pi + 1, high);
    }
}
// selection sort
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
// calculating time
int timeCalc(time_point<system_clock> start, time_point<system_clock> end, string name)
{
    duration<double> elapsed_seconds = end - start;
    time_t end_time = system_clock::to_time_t(end);

    cout << "finished "<< name <<" computation at " << ctime(&end_time)
         << "elapsed time: " << elapsed_seconds.count() << "s\n";
        
}
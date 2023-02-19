#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void input(int A[], int n);
void display(int A[], int n);
void selectionSort(int A[], int n);

int main()
{
    int n, arr[100000];
    time_t t1, t2;
    cout << "Enter the number of elements in Array";
    cin >> n;
    input(arr, n);
    cout << "Before SelectionSort" << endl;
    display(arr, n);
    time(&t1);
    selectionSort(arr, n);
    cout << endl;
    cout << "After SelectionSort" << endl;
    display(arr, n);
    time(&t2);
    cout << endl
         << "Time" << t2 - t1 << endl;
}

void input(int A[], int n)
{
    // srand(time(0));
    for (int i = 0; i < n; i++)
    {
        A[i] = rand() % 100;
    }
}

void display(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

void selectionSort(int A[], int n)
{
    int index, least;
    for (int i = 0; i < n; i++)
    {
        index = i;
        least = A[i];
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < least)
            {
                least = A[j];
                index = j;
            }
        }
        if (i != index)
        {
            swap(A[i], A[index]);
        }
    }
}
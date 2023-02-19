#include <iostream>
#include <stdlib.h>
// #include<time.h>

using namespace std;

void input(int A[], int n);
void display(int A[], int n);
void bubbleSort(int A[], int n);

int main()
{
    int n, arr[100000];
    cout << "Enter the number of elements in Array";
    cin >> n;
    input(arr, n);
    cout << "Before BubbleSort" << endl;
    display(arr, n);
    bubbleSort(arr, n);
    cout << endl;
    cout << "After Bubblesort" << endl;
    display(arr, n);
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
#include <iostream>
using namespace std;

void insertIth(int A[], int n, int i)
{
    int key = A[i];
    int j = i - 1;
    while (j > 0 && A[j] > key)
    {
        A[j + 1] = A[j];
        j--;
    }
    A[j + 1] = key;
}
void display(int A[], int n)
{
    int i = 0;
    while (i < n)
    {
        cout << A[i] << ", ";
        i++;
    }
    cout << endl;
}

void insertionSort(int A[], int n)
{
    int i = 1;
    while (i < n)
    {
        insertIth(A, n, i);
        i++;
    }
}

int main()
{
    int arr[] = {2, 3, 42, 21, 24, 32, 12, 7};
    int size = sizeof(arr) / sizeof(int);
    display(arr, size);
    insertionSort(arr, size);
    display(arr, size);
    return 0;
}
#include <iostream>
#include <stdlib.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int simpleSort(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <n; j++)
        {
            if (A[j] < A[i])
                swap(&A[i], &A[j]);
        }
    }
}
void randArr(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        A[i] = rand() % 100;
    }
}

int main()
{
    int arr[100], n;
    cout << "Enter the elements in the Array!";
    cin >> n;
    randArr(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }
    simpleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }
}

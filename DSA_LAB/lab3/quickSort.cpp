#include <iostream>
#include <stdlib.h>
// #include<time.h>

using namespace std;

void swapp(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
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

int partition(int A[], int l, int r)
{
    int x, y, pivot;
    x = l;
    y = r;
    pivot = A[l];
    while (x < y)
    {
        while (A[x] <= pivot)
        {
            x++;
        }
        while (A[y] > pivot)
        {
            y--;
        }
        if (x > y)
        {
            swapp(&A[x], &A[y]);
        }
    }
    swapp(&A[l], &A[y]);
    return y;
}

void qs(int A[], int l, int r)
{
    int p;
    if (l < r)
    {
        p = partition(A, l, r);
        qs(A, l, p - 1);
        qs(A, p + 1, r);
    }
}

int main()
{
    int n, arr[10];
    cout << "Enter the number of elements in Array";
    cin >> n;

    input(arr, n);
    cout << "Before QuickSort" << endl;
    display(arr, n);
    qs(arr, 0, n - 1);
    cout << endl;
    cout << "After QuickSort" << endl;
    display(arr, n);
}

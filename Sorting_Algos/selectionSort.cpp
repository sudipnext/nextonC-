#include <iostream>
using namespace std;

void swapp(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int locOfSmallest(int A[], int start, int end)
{
    int i = start;
    int j = i;
    while (i <= end)
    {
        if (A[i] < A[j])
        {
            j = i;
        }
        i++;
    }
    return j;
}

void selectionSort(int A[], int n)
{
    int i = 0;
    while (i < n - 1)
    {
        int j = locOfSmallest(A, i, n - 1);
        swapp(&A[i], &A[j]);
        i++;
    }
}

void display(int A[], int n){
    for(int i=0; i<n; i++){
        cout << A[i] << ", ";
    }
}

int main()
{
    int arr[]={102, 12, 176, 189, 20, 40, 21};
    int size = sizeof(arr)/sizeof(int);
    display(arr, size);
    cout <<endl;
    selectionSort(arr, size);
    display(arr, size);

    return 0;
}
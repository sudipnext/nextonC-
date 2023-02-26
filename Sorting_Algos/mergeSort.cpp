#include <iostream>
using namespace std;

void combine(int A[], int start, int mid, int end)
{
    int *buffer = new int[end + 1];
    int k = start;
    while (k <= end)
    {
        buffer[k] = A[k];
        k++;
    }

    int i= start;
    int j= mid+1;
    k=s;
    
}

void mrgSort(int A[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;
    mrgSort(A, start, mid);
    mrgSort(A, mid + 1, end);
    combine(A, start, mid, end);
}



int main()
{

    return 0;
}
#include<iostream>
using namespace std;

void swapp(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bble(int A[], int n){
    int i = n-1;
    while(i>0){
        if(A[i]< A[i-1]){
            swapp(&A[i], &A[i-1]);
        }
        i--;
    }
}
void display(int A[], int n){
    for(int i=0; i<n; i++){
        cout << A[i]<< ", ";
    }
    cout <<endl;
}

void bblSort(int A[], int n){
    int i=0; 
    while(i<n-1){
        bble(A, n);
        i++;
    }
}

int main(){
    int arr[]={2, 3, 42, 21, 24 ,32, 12, 7};
    int size = sizeof(arr)/sizeof(int);
    display(arr, size);
    bblSort(arr, size);
    display(arr, size);
}
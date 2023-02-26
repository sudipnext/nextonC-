#include<iostream>
#include<stdlib.h>
#define max 100
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]< arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
void arrayRandom(int arr[], int n){
    for(int i=0; i< n; i++){
        arr[i] = rand() % 100;
    }
}
void display(int arr[], int n){
     for(int i=0; i< n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    
    int arr[max];
    arrayRandom(arr, 12);
    display(arr, 12);
    cout <<endl;
    selectionSort(arr, 12);
    display(arr, 12);
    return 0;
}
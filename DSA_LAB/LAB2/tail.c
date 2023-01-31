#include<stdio.h>
long int tailfact(int n, int a){
    if(n==0){
        return 0;
    }else{
        return tailfact(n-1, n*a);
    }
}
int main(){
     int n;
    printf("Enter a number n\n ");
    scanf("%d", &n);
    printf("The factorial of the number %d is \n", tailfact(n, 1));
    return 0;
}
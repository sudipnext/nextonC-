//Given Equation is 5x4+3x3+1x2+8x+7
// 2x3+6x2+2x+1


#include<stdio.h>
#include<stdlib.h>

struct polynomial{
    int coeff;
    int pow;
    struct polynomial* next;
};
typedef struct polynomial node;
node* phead1 = NULL;
node* phead2 = NULL;
void Addition();
void Print();
int main(){
    Addition();
    Print();
    return 0;
}
void Addition(){
    node *firstPolynomial = (node *)malloc(sizeof(node));
    node *secondPolynomial = (node *)malloc(sizeof(node));
    //Assigning the variables of the equation
    node* curr1 = phead1, *curr2 = phead2;
    
    
    

}
void Print(){
    node *curr = phead1;
    while (curr != NULL)
    {
        printf("%dx^%d", curr->coeff, curr->pow);
        curr = curr->next;
    }
    
}
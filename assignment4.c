#include <stdio.h>
#include<stdlib.h>


struct student
{
    char name[20];
    int roll;
    char address[20];
    int phonenumber;
} x;
int main()
{
    int i, n;
    FILE *fptr;
    fptr = fopen("students.txt", "w");
    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    printf("How many numbers you want to enter");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("NAME:-\t");
        scanf("%s", x.name);
        printf("ROLL:-\t");
        scanf("%d", &x.roll);
        printf("ADDRESS:-\t");
        scanf("%s", x.address);
        printf("PHONENUM:-\t");
        scanf("%d", &x.phonenumber);
    }
        for (i = 0; i < n; i++)
    {
        fprintf(fptr, "Student-Details-are-as-follows:-");
        fprintf(fptr,"\nNAME:- %s", x.name);
     
        fprintf(fptr,"\nROLL: %d", x.roll);
       
        fprintf(fptr,"\nADDRESS:- %s", x.address);
       
        fprintf(fptr,"\nPHONENUM:- %d", x.phonenumber);
    }
}
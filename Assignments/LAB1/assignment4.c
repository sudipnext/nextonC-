#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[20];
    int roll;
    char address[20];
    int phonenumber;
} x[100];
int main()
{
    struct student temp;
    int i, n, j;
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
        scanf("%s", x[i].name);
        printf("ROLL:-\t");
        scanf("%d", &x[i].roll);
        printf("ADDRESS:-\t");
        scanf("%s", x[i].address);
        printf("PHONENUM:-\t");
        scanf("%d", &x[i].phonenumber);
    }
    fprintf(fptr, "Student-Details-are-as-follows:-");
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(x[i].name, x[j].name > 0))
            {
                temp = x[i].name;
                x[i].name= x[j].name;
                x[j].name=temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        fprintf(fptr, "\nNAME:- %s", x[i].name);
        fprintf(fptr, "\nROLL: %d", x[i].roll);
        fprintf(fptr, "\nADDRESS:- %s", x[i].address);
        fprintf(fptr, "\nPHONENUM:- %d", x[i].phonenumber);
    }
}
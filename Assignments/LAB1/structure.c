// Store and retrieve the name of the students and obtained marks in c programming in 1st semester using structure.
#include <stdio.h>
struct student
{
    char name[20];
    int n_in_c;
} x;

int main()
{
    int i, n;
    printf("Enter the number of students you want to store\n");
    scanf("%d", &n);
    printf("----------------------Student Data--------------------------\n");
    for (i = 0; i <= n; i++)
    {
        printf("\nNAME:- \t");
        scanf("%s", x.name);
        printf("\nMARKS IN C:- \t");
        scanf("%d", &x.n_in_c);
    }

    printf("-------------------------------------------------------------\n");
    for (i = 0; i <= n; i++)
    {
        printf("\nNAME:-\t %s", x.name);
        printf("\nMarks in C:-\t %d", x.n_in_c);
    }
}
#include <stdio.h>
int strlen(char *str);
char str[20];
int main()
{
    int flag = 0;
    int j;
    int n;
    printf("\nEnter the string: ");
    gets(str);
    n = strlen(str);
    for (j = 0; j < n; j++)
    {
        if (str[j] == 'c' || str[j] == 'C')
        {
            printf("\nThe postion of the charcter is %d", j + 1);
            flag = 1;
        }
    }
    if (flag != 1)
    {
        printf("\nCharacter not found!");
    }
}
int strlen(char *str)
{
    int i = 0;
    for (i = 0; str[i] != '\0'; i++);
    return i;
}
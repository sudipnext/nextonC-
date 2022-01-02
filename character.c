#include <stdio.h>

int main()
{
    char s[20];
    int i;
    int len = 0;
    int flag = 0;
    printf("Enter the string\n");
    gets(s);
    for (i = 0; s[i] != '\0'; ++i)
    {
        len++;
    };
    printf("Length of the string: %d\n", i);
    for (i = 0; i <= len; i++)
    {
        if (s[i] == 'C' || s[i] == 'c')
        {
            printf("The postion of the character is %d\n", i + 1);
            flag = 1;
        }
    }
    if (flag != 1)
    {
        printf("Character not found!\n");
    }
    return 0;
}

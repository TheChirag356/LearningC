// Check if a given character is present in a string or not.

#include<stdio.h>

void checkChar(char str[], char ch);

int main()
{
    char str[] = "HelloWorld";
    char ch = 'f';
    checkChar(str, ch);

    return 0;
}

void checkChar(char str[], char ch)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            printf("Character is Present");
            return;
        }
    }
    printf("Character is not present.");
}
#include <stdio.h>
#include <string.h>

void salting(char password[]);

int main()
{
    char password[100];
    printf("Enter your password: ");
    scanf("%s", &password);

    printf("The salted password is: ");
    salting(password);

   return 0;
}

void salting(char password[])
{
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass, password);
    strcat(newPass, salt);
    puts(newPass);
}
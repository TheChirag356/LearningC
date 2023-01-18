// Exercise 13 by CodeWithHarry
// You have to create a command


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{

    char * operations;
    int num1, num2;
    operations = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    printf("Operation is %s\n", operations);
    printf("Num1 is %d\n", num1);
    printf("Num2 is %d\n", num2);

    if (strcmp(operations, "add") == 0)
    {
        printf("%d\n", num1 + num2);
    }
    else if (strcmp(operations, "subtract") == 0)
    {
        printf("%d\n", num1 - num2);
    }
    else if (strcmp(operations, "multiply") == 0)
    {
        printf("%d\n", num1 * num2);
    }
    else if (strcmp(operations, "division") == 0)
    {
        printf("%d\n", num1 / num2);
    }
    else
    {
        printf("You did not enter a valid argument.\n");
    }
    

    return 0;
}

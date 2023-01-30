//Write a program to make a calculator using switch case.
#include <stdio.h>

int main()
{
    printf("\n\n\n");
    char op;
    double first, second;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter first operand: \n");
    scanf("%lf", &first);
    printf("Enter second operand: \n");
    scanf("%lf", &second);

    switch (op)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        break;
    default:
        printf("Error! operator is not correct");
    }

    printf("\n\n\n");

    return 0;
}

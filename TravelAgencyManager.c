#include<stdio.h>
#include<string.h>
/*
You manage a travel agency. You want your 'n' drivers to enter the following details:
1. Name
2. Driving License Number
3. Route
4. Kms Car Drived
Your program should be able to take n as input (or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.
Create a structure

Your program should print details of the drivers in a beautiful fashion.
*/

typedef struct Driver
{
    char name[35];
    char dlNo[45];
    char route[47];
    int kms;

}driver;


int main()
{

    driver d1, d2, d3;
    //Driver 1
    printf("Enter the details of the Driver 1\n");
    printf("Enter the name of First Driver: ");
    scanf("%s", &d1.name);
    
    printf("Enter the dlno of First Driver: ");
    scanf("%s", &d1.dlNo);

    printf("Enter the route of First Driver: ");
    scanf("%s", &d1.route);

    printf("Enter the number of kms of First Driver: ");
    scanf("%d", &d1.kms);

    //Driver 2
    printf("Enter the details of the Driver 1\n");
    printf("Enter the name of Second Driver: ");
    scanf("%s", &d2.name);
    
    printf("Enter the dlno of Second Driver: ");
    scanf("%s", &d2.dlNo);

    printf("Enter the route of Second Driver: ");
    scanf("%s", &d2.route);

    printf("Enter the number of kms of Second Driver: ");
    scanf("%d", &d2.kms);

    //Driver 3
    printf("Enter the details of the Driver 1\n");
    printf("Enter the name of Third Driver: ");
    scanf("%s", &d3.name);
    
    printf("Enter the dlno of Third Driver: ");
    scanf("%s", &d3.dlNo);

    printf("Enter the route of Third Driver: ");
    scanf("%s", &d3.route);

    printf("Enter the number of kms of Third Driver: ");
    scanf("%d", &d3.kms);

    printf("\n\n*********Printing Information of these drivers: *********\n");
    printf("\nFor Driver Number 1:\nName is %s\n", d1.name);
    printf("DL No. is %s\n", d1.dlNo);
    printf("Route is %s\n", d1.route);
    printf("Kms is %d\n", d1.route);
    
    printf("\nFor Driver Number 2:\nName is %s\n", d2.name);
    printf("DL No. is %s\n", d2.dlNo);
    printf("Route is %s\n", d2.route);
    printf("Kms is %d\n", d2.route);

    printf("\nFor Driver Number 3:\nName is %s\n", d3.name);
    printf("DL No. is %s\n", d3.dlNo);
    printf("Route is %s\n", d3.route);
    printf("Kms is %d\n", d3.route);

    return 0;
}
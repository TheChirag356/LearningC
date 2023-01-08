// Write a program to write all the odd numbers from 1 to n in a file

#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Odd.txt", "w");    

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 1; i <=n; i++)
    {
        if(i % 2 != 0)
        {
            fprintf(fptr, "%d\n", i);
        }
    }

    fclose(fptr);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int count = 0;
    int * ptr;

    printf("Please enter a number: ");
    scanf("%d", &n);

    ptr = (int *) malloc(n*sizeof(int));
    for(int i = 0; i < n; i++)
    {
        printf("Enter a number for %d position: ", i);
        scanf("%d", &ptr[i]);
        count += ptr[i];
    }

    for(int i = 0; i < n; i++)
    {
        printf("Number for %d position: %d\n", i, ptr[i]);
        
    }

    printf("The sum of all the character is: %d", count);
    free(ptr);



    return 0;
}
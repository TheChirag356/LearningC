// Reverse an array.

#include<stdio.h>

void arrayRev(int arr[]);

int main()
{
    
    int arr[] = {1,2,3,4,5,6,7,8};
    printf("Before reversing the array.\n");
    for(int i = 0; i < 8; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }

    arrayRev(arr);

    printf("\nAfter reversing the array.\n");
    for(int i = 0; i < 8; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
    
    return 0;
}

void arrayRev(int arr[])
{
    int n = 8;
    int temp;
    for(int i = 0; i < (int)(n/2) ; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

// a b c d e f g
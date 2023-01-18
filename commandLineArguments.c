#include<stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("This argument at index number %d has value of %s.\n", i, argv[i]);
    }
    
    return 0;
}

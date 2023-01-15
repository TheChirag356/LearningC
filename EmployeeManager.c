#include<stdio.h>
#include<stdlib.h>

int main(){
    int chars, i = 0;
    char * ptr;
    
    while (i < 3)
    {
        printf("Employee %d: Enter the number of characters in your Employee Id: ", i+1);
        scanf("%d", &chars);
        ptr = (char *) malloc((chars+1)*sizeof(int));
        printf("Enter your Employee Id: ");
        scanf("%s", ptr);
        printf("Your Employee Id is: %s\n", ptr);

        free(ptr);

        i += 1;




    }
    


    return 0;
}
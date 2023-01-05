// Make a structure to store a Bank Account Information of a customer of ABC Bank. Also, make an alias for it.

#include<stdio.h>

typedef struct BankAccount
{
    int accountNo;
    char name[100];

}acc;


int main(){
    
    acc acc1 = {123, "Chirag"};
    acc acc2 = {124, "Sambhav"};
    acc acc3 = {125, "Shallu"};

    printf("Acc No.: %d\n", acc1.accountNo);
    printf("Name: %s\n", acc1.name);
    return 0;
}
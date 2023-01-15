#include <stdio.h>
#include <string.h>
#include <io.h>

char Name[12];
char file[25];

void file_name();
void Make_Contact(int);
void Search_Contact();
void Delete_Contact();
void Edit_contact();
void Print_list();

int main(void)
{
    int choice;
    back:
    system("cls");
    printf("\n--# WELCOME TO CONTACT MANAGEMENT #--\n");

    printf("\n[1] Add a contact\n[2] List all contacts\n[3] Search for a contact\n[4] Edit a contact\n[5] Delete a contact\n[0] Exit\n\n[>] ");
    scanf("%d",&choice);

    // Making folder
    _mkdir("Contacts");

    system("cls");

    // Calling functions according to user's choice
    if(choice == 1)
        Make_Contact(1);
    else if(choice == 2)
        Print_list();  
    else if(choice == 3)
        Search_Contact();
    else if(choice == 4)
        Edit_contact();
    else if(choice == 5)
        Delete_Contact();
    else
        return 0;

    goto back;
    return 0;
}

void Make_Contact(int d)
{
    char Phone_no[15];
    char Address[20];
    FILE* ptr = NULL;

    // Heading
    printf("\n--# INPUT THE INFORMATION #--\n\n");
    if(d)
        getchar();

    // Taking input of variables
    printf("Name: ");
    fgets(Name, 10, stdin);

    printf("Phone no: ");
    fgets(Phone_no, 15, stdin);

    printf("Address: ");
    fgets(Address, 20, stdin);
    
    // Removing \n from Phone_no and Address
    int len = strlen(Phone_no);
    if(Phone_no[len-1] == '\n')
        Phone_no[len-1] = '\0';

    len = strlen(Address);
    if(Address[len-1] == '\n')
        Address[len-1] = '\0';

    file_name();
    // Opening handle to the file
    ptr = fopen(file, "a");

    // Saving the information or contact
    fprintf(ptr, "========================================================");
    if(fprintf(ptr, "\nName     : %s\nPhone no : %s\nAddress  : %s", Name, Phone_no, Address) < 0)
        printf("An error occured while saving !");
    else
        printf("\nSuccesfully saved contact !\n");
    fprintf(ptr, "\n========================================================");

    // Closing the file
    fclose(ptr);

    printf("\nPress any key to go back !");
    getchar();
}

void Search_Contact()
{
    char ch;
    getchar();
    // Taking the input of name
    printf("Enter the name for searching the contact: ");
    fgets(Name, 12, stdin);

    file_name();
    // Opening handle to file
    FILE* ptr = fopen(file, "r");
    if(ptr == NULL)
        printf("No contact is saved with this name !");

    // Reading and printing the file
    while((ch = fgetc(ptr)) != EOF)
        printf("%c",ch);

    fclose(ptr);

    printf("\nPress any key to go back !");
    getchar();
}

void Delete_Contact()
{
    // Taking name to remove
    printf("Enter the name for deleting: ");
    getchar();
    fgets(Name, 12, stdin);

    file_name();
    // Removing and printing error if function failed
    if(remove(file) == 1)
        printf("\nFailed to delete the contact !");
    else
        printf("\nSuccesfully deleted the contact !");
    
    printf("\nPress any key to go back !");
    getchar();
}

void Edit_contact()
{
    char ch;
    int e;
    FILE* ptr = NULL;
    getchar();
    // Taking the input of name
    printf("Enter the name for editing the contact: ");
    fgets(Name, 12, stdin);

    file_name();
    // Reading the file
    ptr = fopen(file, "r");

    if(ptr == NULL)
    {
        printf("No contact is saved with this name !\nPress any key to continue !");
        getchar();
    }
    else
    {
        while((ch = fgetc(ptr)) != EOF)
            printf("%c",ch);

        fclose(ptr);
        // Deleting the file
        remove(file);
        printf("\n\nEnter new information below !\n");
        Make_Contact(0);
    }
}

void Print_list()
{
    int i = 1;
    char ch[17];
    system("dir Contacts /B /A-D > Contacts\\list.txt");

    FILE* ptr = fopen("Contacts\\list.txt", "r");
    
    printf("Contacts :\n");
    while(fgets(ch, 17, ptr) != NULL)
    {
        if(strcmp(ch, "list.txt\n") == 0)
            continue;

        ch[strlen(ch)-5] = '\0';
        printf("%d> %s\n", i, ch);
        i++;
    }

    getchar();
    printf("\nPress any key to go back !");
    getchar();
}

void file_name()
{
    // Emptying file variable
    file[0] = '\0';
    int len = strlen(Name);

    // Removing \n from file 
    if(Name[len-1] == '\n')
        Name[len-1] = '\0';

    // Making file name
    strncat(file, "Contacts\\", 9);
    strncat(file, Name, len-1);
    strncat(file, ".txt", 4);
}
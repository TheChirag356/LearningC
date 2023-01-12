/*
Input: 
<h1> This is a heading </h1>

Output:
This is a heading

Input:
<span> This is a heading2 </span>

Output: 
This is a heading2
*/

#include<stdio.h>
#include<string.h>

void parser(char * string);
void whiteSpaces(char * string);


int main()
{
    char string[] = "<h1>       This is a heading           </h1>";
    parser(string);
    whiteSpaces(string);
    printf("The parsed string is ~~%s~~", string);
    return 0;
}


void parser(char * string)
{
    int in = 0; // Variable to track whether we are inside the tag.
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if(string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if(string[i] == '>')
        {
            in = 0;
            continue;
        }
        if(in == 0)
        {
            string[index] = string[i];
            index++;

        }
    }
    string[index] = '\0';
}


void whiteSpaces(char * string)
{
    while(string[0] == ' ')
    {
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i+1];

        }
        
    }

    while(string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}
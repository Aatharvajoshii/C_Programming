#include <stdio.h>

int main() 
{
    char Name[50];  // array to hold the full name

    printf("Please enter full name: ");
    scanf(" %[^\n]", Name);  // read full line including spaces

    printf("Your name is: %s\n", Name);

    return 0;
}

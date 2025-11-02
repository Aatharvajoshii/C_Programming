/////////////////////////////////////////////////////////////////////////
//  Function Name : DisplayConvert
//  Description :   Convert the case of a character
//  Input :         char
//  Output :        char
//  Author :        Atharva joshi
//  Date :          09/10/2025
// 
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayConvert(char cValue)
{
    if (cValue >= 'a' && cValue <= 'z')
    {
        printf("%c", cValue - 32);
    }
    else if (cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c", cValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}
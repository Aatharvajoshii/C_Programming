/////////////////////////////////////////////////////////////////////////
//  Function Name : Check Vowel
//  Description :   Check whether the character is vowel or not
//  Input :         char
//  Output :        BOOL
//  Author :        Atharva joshi
//  Date :          09/10/2025
// 
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue)
{
    if (cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U' ||
        cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}
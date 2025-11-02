/////////////////////////////////////////////////////////////////////////
//  Function Name : NonFact
//  Description :   This function takes an integer as input and prints all the non-factors of that number.
//  Input :         int
//  Output :        void
//  Author :        Atharva joshi
//  Date :          09/10/2025
// 
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void NonFact(int iNo)
{
    int i = 0;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for (i = 1; i < iNo; i++)
    {
        if (iNo % i != 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    NonFact(iValue);
    
    return 0;
}
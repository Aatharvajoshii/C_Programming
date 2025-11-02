/////////////////////////////////////////////////////////////////////////
//  Function Name : DisplayFactor
//  Description :   This function accepts one integer number from user and    
//  Input :         int
//  Output :        void
//  Author :        Atharva joshi
//  Date :          09/10/2025
// 
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo; i++)   // include iNo itself
    {
        if ((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d ", i);
        }
    }
    printf("\n");  // for neat output
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}

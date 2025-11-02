/////////////////////////////////////////////////////////////////////////
//  Function Name : CheckDivisible
//  Description :   Check whether the number is completely divisible by 5 or not
//  Input :         int
//  Output :        bool
//  Author :        Atharva joshi
//  Date :          09/10/2025
// 
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool CheckDivisible(int iNo)
{
    if ((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0;
    bool bRet = false;

    printf("Enter first number:\n");
    scanf("%d", &iValue1);

    bRet = CheckDivisible(iValue1);

    if (bRet == true)
    {
        printf("It is completely divisible by 5\n");
    }
    else
    {
        printf("It is not divisible by 5\n");
    }

    return 0;
}

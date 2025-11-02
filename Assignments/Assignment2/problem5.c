/////////////////////////////////////////////////////////////////////////
//  Function Name : CheckEvenOdd
//  Description :   Accepts an integer and checks whether it is even or odd.
//  Input :         Integer
//  Output :        Boolean (true if even, false if odd)
//  Author :        Atharva joshi
//  Date :          09/10/2025
// 
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;

    if(iRem == 0)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if (bRet == true)
    {
        printf("It is an even number\n");
    }
    else
    {
        printf("It is an odd number\n");
    }

    return 0;
}
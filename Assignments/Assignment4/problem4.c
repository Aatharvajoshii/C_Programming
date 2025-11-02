/////////////////////////////////////////////////////////////////////////
//  Function Name : SumNonFact
//  Description :   Write a program which accept number from user and return
//  Input :         Integer
//  Output :        Integer
//  Author :        Atharva joshi
//  Date :          09/10/2025
// 
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int SumNonFact(int iNo)
{
    int i = 0, iSum = 0;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for (i = 1; i < iNo; i++)
    {
        if (iNo % i != 0)
        {
            iSum = iSum + i;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d", iRet);
    
    return 0;
}
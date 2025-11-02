/////////////////////////////////////////////////////////////////////////
//  Function Name : FactDiff
//  Description :   Accepts an integer and returns the difference between the sum of its factors and the sum of its non-factors.
//  Input :         int
//  Output :        void
//  Author :        Atharva joshi
//  Date :          09/10/2025
// 
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>


int FactDiff(int iNo)
{
    int i = 0, iSumFact = 0, iSumNonFact = 0;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for (i = 1; i < iNo; i++)
    {
        if (iNo % i == 0)
        {
            iSumFact = iSumFact + i;
        }
        else
        {
            iSumNonFact = iSumNonFact + i;
        }
    }
    return iSumFact - iSumNonFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);
    
    return 0;
}
/////////////////////////////////////////////////////////////////////////
//  Function Name : MultFact
//  Description :   Write a program which accept number from user and return
//  Input :         int
//  Output :        
//  Author :        Atharva joshi
//  Date :          09/10/2025
// 
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int MultFact(int iNo)
{
    int i = 0;
    int iMult = 1;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo / 2; i++)
    {
        if (iNo % i == 0)
        {
            iMult = iMult * i;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d", iRet);

    return 0;
}
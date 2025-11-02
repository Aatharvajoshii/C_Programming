/////////////////////////////////////////////////////////////////////////
//  Function Name : Divide
//  Description :   This function divides two numbers.
//  Input :         int,int
//  Output :        int
//  Author :        Atharva joshi
//  Date :          09/10/2025
// 
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Divide(int iNo1,int iNo2)
{
    int iAns = 0;
    if(iNo2 == 0)
    {
        return -1;
    }
    iAns = iNo1/iNo2;

    return iAns;
}

int main()
{
    int iValue1 = 15,iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1,iValue2);

    printf("DIVISION IS %d",iRet);

    return 0;
}
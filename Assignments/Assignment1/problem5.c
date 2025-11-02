/////////////////////////////////////////////////////////////////////////
//  Function Name : Accept
//  Description :   Accept number from user and print that number of * on screen
//  Input :         int
//  Output :        void
//  Author :        Atharva joshi
//  Date :          09/10/2025
// 
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    
    printf("enter the frequency : \n");
    scanf("%d",&iValue);

    Accept (iValue);

    return 0;
}
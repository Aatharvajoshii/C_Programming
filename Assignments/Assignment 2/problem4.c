/////////////////////////////////////////////////////////////////////////
//  Function Name : Display
//  Description :   Accept one number and frequency from user and display that number in given frequency.
//  Input :         int, int
//  Output :        void
//  Author :        Atharva joshi
//  Date :          09/10/2025
// 
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo,int iFrequency)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= iFrequency ; iCnt++)
    {
        printf("%d\t",iNo );
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    printf("Enter the Frequency : \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}
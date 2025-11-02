/////////////////////////////////////////////////////////////////////////
//  Function Name : Display
//  Description :   Accept number from user and display that number of * on screen
//  Input :         int
//  Output :        void
//  Author :        Atharva joshi
//  Date :          09/10/2025
// 
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    while(iCnt <= iNo )
    {
        printf("*");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;
    
    printf("enter the frequency : \n");
    scanf("%d",&iValue);

    Display (iValue);

    return 0;
}
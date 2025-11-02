/////////////////////////////////////////////////////////////////////////
//  Function Name : Display
//  Description :   Accept one number from user and check whether that number is less than 10 or not. 
//                  If number is less than 10 then print "Hello" on console.
//  Input :         int
//  Output :        void
//  Author :        Atharva joshi
//  Date :          09/10/2025
// 
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo<10)
    {
        printf("hello");
    }
    else
    {
        printf("The number is not below 10");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
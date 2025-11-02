/////////////////////////////////////////////////////////////////////////
//  Function Name : CheckEvenOdd
//  Description :   Check whether a number is even or odd   
//  Input :         int
//  Output :        void
//  Author :        Atharva joshi
//  Date :          09/10/2025
// 
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void CheckEvenOdd(int num)
{
    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);
}

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    CheckEvenOdd(number);
    return 0;
}
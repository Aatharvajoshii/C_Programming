/////////////////////////////////////////////////////////////////////////
//  Function Name : FindMax
//  Description :   Find the maximum of two numbers
//  Input :         int
//  Output :        void
//  Author :        Atharva joshi
//  Date :          09/10/2025
// 
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int FindMax(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = FindMax(num1, num2);
    printf("Maximum number is: %d\n", result);
    return 0;
}
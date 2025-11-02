/////////////////////////////////////////////////////////////////////////
//  Function Name : PrintEven
//  Description :   Prints all even numbers from 2 to 2*N using recursion
//  Input :         int
//  Output :        void
//  Author :        Atharva joshi
//  Date :          09/10/2025
// 
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void PrintEven(int iNo, int i)
{
    if (i <= iNo * 2)
    {
        printf("%d ", i);
        PrintEven(iNo, i + 2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number (e.g., 7): ");
    scanf("%d", &iValue);

    printf("Output: ");
    PrintEven(iValue, 2);
    printf("\n");

    return 0;
}

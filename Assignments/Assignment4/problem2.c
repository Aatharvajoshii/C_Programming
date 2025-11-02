/////////////////////////////////////////////////////////////////////////
//  Function Name : FactRev
//  Description :   To display factors of given number in reverse order
//  Input :         Integer
//  Output :        Factors in reverse order
//  Author :        Atharva joshi
//  Date :          09/10/2025
// 
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void FactRev(int iNo)
{
    int i = 0;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for (i = iNo / 2; i >= 1; i--)
    {
        if (iNo % i == 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d", &iValue);

    FactRev(iValue);
    return 0;
}
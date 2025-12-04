#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("*\t");           // Border
            }
            else if(i == j)
            {
                printf("#\t");           // Main diagonal
            }
            else if(j == (iCol - i + 1))
            {
                printf("$\t");           // Secondary diagonal
            }
            else
            {
                printf("\t");            // Blank interior
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);
}
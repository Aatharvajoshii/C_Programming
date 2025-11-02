/////////////////////////////////////////////////////////////////////////
//  Function Name : Check
//  Description :   Accepts an integer and prints numbers from 5 to 1
//  Input :         void
//  Output :        void
//  Author :        Atharva joshi
//  Date :          09/10/2025
// 
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display()
{
    int i = 5;        
    while (i >= 1)    
    {
        printf("%d\t", i);
        i--;           
    }
    printf("\n");
}

int main()
{
    Display();
    return 0;
}

// Input : 12   2       Output : true
// Input : 12   3       Output : true
// Input : 12   2       Output : true
// Input : 12   2       Output : true
// Input : 12   2       Output : true


#include<stdio.h>

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    if(iValue1 % iValue2 == 0)
    {
        printf("it is completely divisible\n");
    }
    else
    {
        printf("it is not divisible\n");
    }
    return 0;
}
#include<stdio.h>
#include<stdbool.h>

int CheckPrime(int iNo)
{
    int iCnt = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2 ; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            break;                  //optimization due to break
        }
    }
    if(iCnt > iNo/2)                //No factors
    {
        return true;    
    }
    else                            //Atleast 1 factor
    {
        return false;
    }
}

int main ()
{

    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is prime number\n",iValue);
    }
    else
    {
        printf("%d is not a prime number\n",iValue);
    }

    return 0;
}
/*  Time complexity : for prime N/2
    Time complaxity :for non prime 1 or 2
*/
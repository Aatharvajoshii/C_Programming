#include<stdio.h>

void strCatX(char *src,char *dest)
{
    while(*dest != '\0')
    {
        *dest++;
    }
    while(*src !='\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';       //*dest = *src;
}

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter Source String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Destination String : \n");
    scanf(" %[^'\n']s",Brr);

    strCatX(Arr,Brr);

    printf("Updated String is : %s\n",&Brr);

    return 0;
}
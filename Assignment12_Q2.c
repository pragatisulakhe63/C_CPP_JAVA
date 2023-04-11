//Accept number from user and check whether it contains 0 in it or not

#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
    int iDigit = 0;

    while(iNo>0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return 1;
        }
        iNo=iNo/10;
    }
    return 0;
}
int main()
{
    int iValue=0;
    bool bRet = false;

    printf("Enter The Number : ");
    scanf("%d",&iValue);

    bRet=ChkZero(iValue);

    if(bRet == true)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There Is No Zero");
    }
    return 0;
}
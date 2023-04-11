//Accept number from user and return multiplication of all digits

#include<stdio.h>

int MultDigit(int iNo)
{
    int iDigit = 0,iMult=1;

    while(iNo>0)
    {
       iDigit=iNo%10;
       if(iDigit > 0)
        {
            iMult*=iDigit;
        }
       iNo=iNo/10;
    }
    return iMult;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter The Number : ");
    scanf("%d",&iValue);

    iRet=MultDigit(iValue);

    printf("%d",iRet);

    return 0;
}
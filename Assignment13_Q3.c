//Accept number from user and return the count of digits in between 3 and 7

#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0,iCnt=0;

    while(iNo>0)
    {
        iDigit=iNo%10;
       if(iDigit>3 && iDigit<7)
        {
            iCnt++;
        }
       iNo=iNo/10;
    }
    return iCnt;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter The Number : ");
    scanf("%d",&iValue);

    iRet=CountRange(iValue);

    printf("%d",iRet);

    return 0;
}
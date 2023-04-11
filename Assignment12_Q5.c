//Accept number from user and count frequency of such a digits which are less than 6

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Count(int iNo)
{
    int iDigit = 0,iCnt=0;

    while(iNo>0)
    {
        iDigit = iNo%10;
        if(iDigit < 6)
        {
            iCnt++;
        }
        iNo=iNo/10;
    }
    return iCnt;
}
int main()
{
    BOOL iValue=0,iRet=0;

    printf("Enter The Number : ");
    scanf("%d",&iValue);

    iRet=Count(iValue);

    printf("%d",iRet);

    return 0;
}

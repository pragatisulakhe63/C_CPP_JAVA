//Accept number from user and count frequency of 4 in it

#include<stdio.h>
#include<stdbool.h>

bool CountFour(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo>0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
           iCnt++;
        }
        iNo=iNo/10;
    }
    return iCnt;
}
int main()
{
    int iValue=0;
    bool bRet = false;

    printf("Enter The Number : ");
    scanf("%d",&iValue);

    bRet=CountFour(iValue);

    printf("%d",bRet);
   
    return 0;
}
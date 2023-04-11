//Accept number from user and count frequency of 2 in it

#include<stdio.h>
#include<stdbool.h>

bool CountTwo(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo>0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
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

    bRet=CountTwo(iValue);

    printf("%d",bRet);
   
    return 0;
}
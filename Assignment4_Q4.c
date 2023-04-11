//Write a program which accept number from user and return summation its non factors

// Input : 12
// output : 50

// Input :10
// Output: 37 

#include<stdio.h>

int SumNonFact(int iNo)
{
    int i = 0;
    int iSum = 0;

    for(i = 2;i < iNo;i++)
    {
        if(iNo % i!=0)
        {
           iSum = iSum + i;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number to Summation non factors:\n ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("Sum :%d",iRet);

    return 0;
}
//Write a program which accept number from user and display its multiplication of factors.

// Input : 12
// output : 144

// Input : 13
// output : 1

// Input :10
// Output: 10

#include<stdio.h>

int MultFact(int iNo)
{
    int Cnt = 1, Sum = 1;
    if(iNo <= 0)
    {
        printf("\n Invalid Number");
    }
    while(iNo > Cnt)
    {
        if(iNo % Cnt == 0)
        {
            Sum = Sum * Cnt;
        }
        Cnt++;
    }
    return Sum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("\nEnter Number To Display Its Multiplication Factors : ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("\n Multiplication Factors is : %d",iRet);
    return 0;
}
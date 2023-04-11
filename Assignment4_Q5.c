//Write a program which accept number from user and return difference between summation of all its factors and non factors.

// Input : 12
// output : -34 

// Input :10
// Output: -29

#include<stdio.h>

int DiffFats(int iNo)
{
    int i = 0;
    int iFact = 0;
    int iNonFact = 0;

     for(i=1;i<iNo;i++)
    {
        if(iNo%i==0)
        {
            iFact+=i;
        }
        else
        {
            iNonFact+=i;
        }
    }
    return iFact - iNonFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n ");
    scanf("%d",&iValue);

    iRet = DiffFats(iValue);
    printf("Difference :%d",iRet);

    return 0;
}
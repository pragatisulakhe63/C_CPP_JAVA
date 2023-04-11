//Write a program which accept number from user and display its factors in decreasing order.

// Input : 12
// output : 6 4 3 2 1

// Input : 13
// output : 1

// Input :10
// Output: 5 2 1

#include<stdio.h>

void FactRev(int iNo)
{
    int Fact = iNo/2;

    while(Fact > 0)
    {
        if(iNo % Fact == 0)
        {
            printf(" %d ",Fact);
        }
        Fact--;
    }

}
int main()
{
    int iValue = 0;
    printf("\n Enter Number To Display Factor in Decreasing Order:");
    scanf("%d",&iValue);

    FactRev(iValue);

    
    return 0;
}
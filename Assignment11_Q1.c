//Accept range from user and display all numbers in between that range
#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
     if(iStart > iEnd)
    {
        printf("Invalid Range !!!");
    }
    else
    {
        for(;iStart <= iEnd; iStart++)
        {
            printf("%d\t",iStart);
        }
    }
    printf("\n");
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Starting point:");
    scanf("%d",&iValue1);

    printf("Enter Ending point:");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}
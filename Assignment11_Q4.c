//Accept range from user and return addition of all even numbers in between that range
#include<stdio.h>

void RangeSum(int iStart, int iEnd)
{
    if(iStart > iEnd|| iStart < 0)
    {
        printf("Invalid Range !!!");
    }
    else
    {
        int iSum=0;

        for(;iStart <= iEnd; iStart++)
        {
              if(iStart % 2 == 0)
            {
                iSum = iSum + iStart;
            }
        }
        printf("%d\t",iSum);
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

    RangeSum(iValue1,iValue2);

    return 0;
}
// Input : 8
// Output : 2 4 6 8 10 12 14 16

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    int iMult = 2;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1 ;iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iMult * iCnt);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}
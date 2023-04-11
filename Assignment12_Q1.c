// Accept number from user and display its digits in reverse order

#include<stdio.h>

void DisplayDigit(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        printf("%d\n",iNo%10);
        iNo=iNo/10;
    }
}
int main()
{
    int iNo=0;

    printf("Enter The Number : ");
    scanf("%d",&iNo);

    DisplayDigit(iNo);

    return 0;
}
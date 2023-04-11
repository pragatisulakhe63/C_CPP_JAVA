#include<stdio.h>

void Table(int iNo)
{
    int i=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=10;i>=1;i--)
    {
        printf("%d\t",iNo*i);
    }
    printf("\n");
}
int main()
{
    int iValue=0;

    printf("Enter The Value : ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(BOOL iNo)
{
    if(iNo>100)
    {
        return TRUE;
    }
    return FALSE;
}
int main()
{
    BOOL iValue = 0,iRet=0;

    printf("Enter The Number : ");
    scanf("%d",&iValue);

    iRet = ChkGreater(iValue);

    if(iRet)
    {
        printf("Greater....");
    }
    else
    {
        printf("Smaller....");
    }
    return 0;
}
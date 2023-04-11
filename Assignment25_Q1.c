///////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 1 Write a program which accept string from user and count number of capital characters.
/// Input  : "Marvellous Multi OS"
/// Output :  4
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int CountCapital(char *str)
{
    int iCnt = 0, i = 0;
    printf("\n");
    while(str[i] != '\0')
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
          iCnt++;
        }
        i++;
    }
    return iCnt;

}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^\n]",arr);

    iRet = CountCapital(arr);

    printf("%d",iRet);
    printf("\n");
    return 0;

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 2 Write a program which accept string from user and count number of small characters
/// Input : "Marvellous"
/// Output : 9
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int CountSmall(char *str)
{
    int iCnt = 0, i = 0;
    printf("\n");
    while(str[i] != '\0')
    {
        if(str[i] >= 97 && str[i] <= 122)
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

    iRet = CountSmall(arr);

    printf("%d",iRet);
    printf("\n");
    return 0;

}
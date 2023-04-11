///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 2 Write a program which accept string from user and accept one character.Check whether that character is present in string or not.
///      Input : “Marvellous Multi OS”
///            :   M
///     Output : 2
///      Input : “Marvellous Multi OS”
///            :   W
///     Output : 0
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Countchar(char *Str,char ch)
{
    int iCnt = 0;
    while(*Str != '\0')
    {
        if(*Str == ch)
        {
            iCnt++;
        }
        *Str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String :\n ");
    scanf("%[^\n]",Arr);

    printf("Enter the Character :\n ");
    scanf("%c",&cValue);

    iRet = Countchar(Arr,cValue);

    printf("Character frequency is %d",iRet);

    return 0;
}
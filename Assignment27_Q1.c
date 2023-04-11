///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 1 Write a program which accept string from user and accept one character.Check whether that character is present in string or not.
///      Input : “Marvellous Multi OS”
///            :   e
///     Output : TRUE
///      Input : “Marvellous Multi OS”
///            :   W
///     Output : FALSE
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Chkchar(char *Str,char ch)
{
    while(*Str != '\0')
    {
        if(*Str == ch)
        {
            return TRUE;
        }
        *Str++;
    }
    return FALSE;
}

int main()
{
    char Arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter String :\n ");
    scanf("%[^\n]",Arr);

    printf("Enter the Character :\n ");
    scanf("%c",&cValue);

    bRet = Chkchar(Arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character is Found");
    }
    else
    {
        printf("Character is Not Found");
    }
    return 0;
}
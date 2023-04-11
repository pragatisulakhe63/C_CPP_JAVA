////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 4. Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).c
///       Input : %
///      Output : TRUE
///       Input : d
///      Output : FALSE
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 0
#define FALSE 1

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*')
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter The Character : \n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is Special Character.\n");
    }
    else
    {
        printf("It is not a Special Character.\n");
    }

    return 0;
}
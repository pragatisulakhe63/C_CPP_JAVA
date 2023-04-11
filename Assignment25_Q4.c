////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 4 Write a program which accept string from user and check whether it contains vowels in it or not
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///  Vowels => a,e,i,o,u
///
///    Input : “marvellous”
///    Output : TRUE
///    Input : “Demo”
///    Output : TRUE
///    Input : “xyz”
///    Output : FALSE
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 0
#define FALSE 1

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            return TRUE;
        }
        *str++;
    }
    return FALSE;
}

int main()
{
    char arr[20];

    BOOL bRet = FALSE;

    printf("Enter String : ");
    scanf("%[^\n]",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("It is Special Character.\n");
    }
    else
    {
        printf("There is no Special Character.\n");
    }
    printf("\n");


    return 0;
}
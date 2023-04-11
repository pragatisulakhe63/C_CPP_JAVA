///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 5. Accept Character From User And Display its ASCII Value in Decimal,Octal And Hexadecimal Format.c
///    Input : A
///    Output : Decimal 65
///             Octal 0101
///             Hexadecimal 0X41
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    printf("The Character is %c Display ASCII Value:\nDecimal = %d.\nOctal is = 0%o.\nHexadecimal = 0X%x",ch,ch,ch,ch);
}
int main()
{
    char cValue = '\0';

    printf("Enter The Character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
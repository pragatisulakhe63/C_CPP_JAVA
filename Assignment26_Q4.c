////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 4 Write a Program which accept string from user and toggle the case
///            Input : "Marvellous Multi OS"
///            Output : mARVELLOUS mULTI os
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strtogglex(char *str)
{
	
    while(*str != '\0')
    {
        if(*str >= 97 && *str <= 122)  /// OR // if(*Str >= 'a' && *Str <= 'z')
        {
            *str = *str - 32;
        }
        else if(*str >= 65 && *str <= 90) /// OR // if(*Str >= 'A' && *Str <= 'Z')
        {
            *str = *str + 32;
        }
        *str++;
    }
}

int main()
{
	char arr[20];
    
	printf("Enter String : ");
	scanf("%[^\n]s",arr);

	strtogglex(arr);

	printf("Modified string is %s.\n",arr);
	
	return 0;
}
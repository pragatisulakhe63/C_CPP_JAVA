////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 1 Write a program which accept string from user and convert it into lower case
///	    Input : “MarvellouS Multi OS”
///     Output : marvellous multi os
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void strLwrx(char *str)
{
	while(*str != '\0')
	{
		if(*str >= 65 && *str <= 90)
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

	strLwrx(arr);


	printf("Modified string is %s.\n",arr);
	
	return 0;
}
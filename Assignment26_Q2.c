////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 2 Write a Program which accept string from user and convert it into Upper Case
///       Input : "Marvellous Multi OS"
///       Output : MARVELLOUS MULTI OS
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void struprx(char *str)
{
	while(*str != '\0')
	{
		if(*str >= 97 && *str <= 122)
		{
			*str = *str - 32;
		}
		*str++;
	}

}

int main()
{
	char arr[20];
    
	printf("Enter String : ");
	scanf("%[^\n]s",arr);

	struprx(arr);


	printf("Modified string is %s.\n",arr);
	
	return 0;
}
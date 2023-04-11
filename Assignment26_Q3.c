///////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 3 Write a Program which accept string from user and Display Only Digits from that string
///     Input : "Marve89llous121"
///     Output : 89121
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(char *str)
{
	while(*str != '\0')
	{
		if(*str >= '0' && *str <= '9')
		{
			 printf("%c",*str);
		}
		*str++;
	}
	printf("\n");
}

int main()
{
	char arr[20];
    
	printf("Enter String : ");
	scanf("%[^\n]s",arr);

	DisplayDigit(arr);

	printf("Modified string is %s.\n",arr);
	
	return 0;
}
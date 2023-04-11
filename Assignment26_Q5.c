///////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 5 Write a Program which accept string from user And Count Number Of White Spaces
///            Input : "Marvellous"
///            Output : 0
///            Input : “MarvellouS Infosystems”
///            Output : 1
///            Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
///            Output : 5
//////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int countWhite(char *str)
{
	
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == 9 || *str == 32)   
        {
            iCnt++;
        }
        *str++;
    }
    return iCnt;
    
}

int main()
{
	char arr[20];
    int iRet = 0;
    
	printf("Enter String : ");
	scanf("%[^\n]s",arr);

	iRet = countWhite(arr);

	printf("%d",iRet);
	
	return 0;
}
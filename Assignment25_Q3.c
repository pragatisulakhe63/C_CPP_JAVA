//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 3 Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.
///     Input : “MarvellouS”
///     Output : 6 (8-2)
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int Diiference(char *str)
{
    int Small_iCnt = 0, Capital_iCnt = 0, i =0;
    printf("\n");
    while(str[i] != '\0')
    {
        if(str[i] >=65 && str[i] <= 90)
        {
           Capital_iCnt++;
        }
        if(str[i] >= 97 && str[i] <= 122)
        {
            Small_iCnt++;
        }
        i++;
    }
    return(Small_iCnt - Capital_iCnt);

}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^\n]",arr);

    iRet = Diiference(arr);

    printf("%d",iRet);
    printf("\n");
    return 0;

}
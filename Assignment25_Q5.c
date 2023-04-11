///////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements 27.5 Write a program which accept string from user and display it in Reverse Order
///  Input :  “MarvellouS”
/// Output : “SuollevraM”
//////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int strLength(char *str)
{
    int iCnt = 0;
    while(str[iCnt] != '\0')
    {
        iCnt++;
    }
    return iCnt;
}
void Reverse(char *crr,char *drr)
{
    int iLength = strLength(crr);
    crr = crr + (iLength - 1);
    while(iLength > 0)
    {
        *drr = *crr;
        *drr++;
        *crr--;
        iLength--;
    }
    *drr = '\0';
}

int main()
{
    char arr[20];
    char brr[20];

    printf("Enter String : ");
    scanf("%[^\n]s",arr);

    Reverse(arr,brr);

    return 0;
}
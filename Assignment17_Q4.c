//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Accept N Numbers From User and display all such numbers which contains 3 digits in it.
///   Input = N : 6
///           Elements : 8525  665 3 76 953 858
///   Output = 665 953 858
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void ThreeDigit_No_Display(int Arr[],int iLength)
{
    int i = 0,Temp = 0,Digit = 0,Cnt = 0;

    for(i = 0;i < iLength; i++)
    {
        Temp = Arr[i];
        Cnt = 0; 
        while(Temp > 0)
        {
            Digit = Temp%10;
            Cnt++;
            Temp /= 10;
        }
        if(Cnt == 3)
        {
            printf("\n Three Digit Element is = %d\n",Arr[i]);
        }
    }
   
}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue = 0;
    int *P = NULL;

  
    printf("Enter Number Of Elements :\n ");
    scanf("%d",&iSize);

    P = (int*)malloc(iSize * sizeof(int));

    if(P==NULL)
    {
        printf("Unable To Allocate Memory.");
        return - 1;
    }

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter %d Element : ",iCnt+1);
        scanf("%d",&P[iCnt]);
    }

    ThreeDigit_No_Display(P,iSize);

    free(P);

    return 0;
}
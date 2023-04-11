//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Accept N Numbers From User And Return The Largest Number
///   Input = N : 6
///           Elements : 85 66 3 66 93 88
///   Output = 93
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Largest_Number(int Arr[],int iLength)
{
    int i = 0,iMax = 0;

    for(i = 1;i < iLength;i++)
    {
        if(Arr[i] == 0)
        {
            iMax == Arr[i];
        }
        if(iMax < Arr[i])
        {
            iMax = Arr[i];
        }
    }
    return iMax;
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

    iRet = Largest_Number(P,iSize);

    printf("Largest Number is %d.\n",iRet);

    free(P);

    
    return 0;
}
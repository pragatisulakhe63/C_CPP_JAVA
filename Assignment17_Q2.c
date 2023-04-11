//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Accept N Numbers From User And Return The Smallest Number
///   Input = N : 6
///           Elements : 85 66 3 66 93 88
///   Output = 3
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Smallest_Number(int Arr[],int iLength)
{
     int i = 0,iMin = 0;

    for(i = 0;i < iLength;i++)
    {
        if(i == 0)
        {
            iMin = Arr[i];
        }
        if(iMin > Arr[i])
        {
            iMin = Arr[i];
        }
    }
    return iMin;

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

    iRet = Smallest_Number(P,iSize);

    printf("Smallest Number is %d.\n",iRet);

    free(P);

    
    return 0;
}
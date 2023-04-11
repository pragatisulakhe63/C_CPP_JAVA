// Accept N Numbers From User And Return Frequency Of Even Numbers.
//     Input =  N   :  6
//     Elements :  85   66   3   80  93   88
//     Output  =  3

#include<stdio.h>
#include<stdlib.h>

int CountEvenFrequency(int Arr[],int iLength)
{
    int i = 0,iFreq = 0;

    for(i = 0;i < iLength;i++)
    {
        if(Arr[i]%2==0)
        {
            iFreq++;
        }
    }
    return iFreq;
}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *P = NULL;

    printf("Enter Numbers N Of the Elements:\n");
    scanf("%d",&iSize);

    P = (int*)malloc(iSize * sizeof(int));

    if(P == NULL)
    {
        printf("Unable to Allocate Memory.");
        return - 1;
    }

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("\n Enter Elements:%d",iCnt+1);
        scanf("%d",&P[iCnt]);
    }

    iRet = CountEvenFrequency(P,iSize);

    printf("\nCount Of Even Number of Frequency is : %d\n",iRet);

    return 0;
}
//Accept N Numbers From User And Return difference between summation of even elements and summation of odd elements.
///    Input =  N   :  6
//     Elements :  85   66   3   80  93   88
//     Output  =  53 (243 - 181)

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int i = 0, EvenSum = 0,OddSum = 0;

    printf("\n");

    for(i = 0;i < iLength;i++)
    {
        if(Arr[i]%2==0)
        {
            EvenSum = EvenSum + Arr[i];
        }
        else
        {
           OddSum = OddSum + Arr[i];
        }
    }
    return(EvenSum - OddSum);
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *P = NULL;

    printf("Enter Number Of Elements:\n");
    scanf("%d",&iSize);

    P = (int*)malloc(iSize * sizeof(int));

    if(P==NULL)
    {
        printf("Unable To Allocate Memory:\n");
        return-1;
    }

   

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter Elements:",iCnt+1);
        scanf("%d",&P[iCnt]);
    }

    iRet = Difference(P,iSize);
    

    printf("\nResult is %d\n",iRet);

    free(P);

    return 0;
}
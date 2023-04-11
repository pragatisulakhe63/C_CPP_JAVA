//Accept N numbers from user and display all such elements which are divisible by 5.
//  Input : N : 6
//  Elements : 85  66  3  80  93  88
//  Output : 85   80

#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int iLength)
{
    int i = 0, EvenSum = 0,OddSum = 0;

    printf("\n");

    for(i = 0;i < iLength;i++)
    {
        if(Arr[i]%5==0)
        {
            printf("%d\n",Arr[i]);
        }
    }
    
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
        printf("Enter Elements%d:",iCnt+1);
        scanf("%d",&P[iCnt]);
    }

    Display(P,iSize);

    free(P);

    return 0;
}
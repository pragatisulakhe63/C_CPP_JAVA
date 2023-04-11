/// Accept N numbers from user and accept one another number as NO,return index of first occurrence of that No.
///  Input :       N : 6
///                NO : 66
///                Elements : 85 66 3 66 93 88
/// Output : 1
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///  Input :      N  : 6
///               NO  : 12
///               Elements : 85 11 3 15 11 111
///  Output : -1
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int First_Occurrence(int Arr[],int iLength,int iNo)
{
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {
           return i++;
        }
    }
    return 0;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue = 0;
    int *p = NULL;

  
    printf("Enter Number Of Elements : \n");
    scanf("%d",&iSize);

    
    printf("Enter The Number :\n ");
    scanf("%d",&iValue);

    p = (int*)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to Allocate Memory.\n");
        return - 1;
    }

  
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter %d Element : \n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = First_Occurrence(p,iSize,iValue);
  
    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("First Occurrence Of Number is %d",iRet);
    }
    
    free(p);

    return 0;
}
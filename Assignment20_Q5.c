// Input : iRow = 3 iCol = 4
/*
 Output : 1 2 3 4
          5 6 7 8
          9 10 11 12
*/
#include<stdio.h>
void DisplayPattern(int iRow,int iCol)
{
    int i=0,j=0;
    int iNo = 1;
    for(i=1;i<=iRow;i++)
    {
        
        for(j=1;j<=iCol;j++)
        {
           printf("%d\t",iNo);
            iNo++;
            
        }
       
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of rows:");
    scanf("%d",&iValue1);

    printf("Enter the number of columns:");
    scanf("%d",&iValue2);
    
    DisplayPattern(iValue1,iValue2);

    return 0;
}
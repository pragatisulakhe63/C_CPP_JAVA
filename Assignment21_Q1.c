// Input : iRows = 4 iCol = 4
// Output : 1 2 3 4 
//          5 6 7 8
//          9 1 2 3
//          4 5 6 7

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    int i = 0,j = 0,Num = 1;
    

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(Num <= 9)
            {
               printf(" %d",Num);
               Num++;
            }
            else
            {
                Num = 1;
                printf(" %d",Num);
                Num++;
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the values of Rows and Columns:\n");
    scanf("%d%d",&iValue1,&iValue2);

    DisplayPattern(iValue1,iValue2);

    return 0;
}
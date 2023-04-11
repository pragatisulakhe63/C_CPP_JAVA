// Input - iRow = 5 iCol = 5

/*
Output : $ * * * *
         * $ * * *
         * * $ * *
         * * * $ *
         * * * * $
*/
#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    int i = 0,j = 0;
    

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if( i == j)
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");
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
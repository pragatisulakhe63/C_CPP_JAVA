// Input : iRow = 5 iCol = 5
/* Output :  1  2  3  4 5 
            -1 -2 -3 -4 -5
             1  2  3  4  5
            -1 -2 -3 -4 -5
             1  2  3  4  5
*/

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    int i = 0,j = 0,Num = 1;
    

    for(i=1;i<=iRow;i++)
    {
       Num = 1;
        for(j=1;j<=iCol;j++)
        {
            if(i%2 != 0)
            {
                printf(" %3d",Num++);
            }
            else
            {
                printf(" %3d",-(Num++));
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
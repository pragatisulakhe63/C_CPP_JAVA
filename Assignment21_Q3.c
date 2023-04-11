// Input : iRow = 5 iCol = 5
// Output : a b c d e
//           1 2 3 4 5
//           a b c d e
//           1 2 3 4 5
//           a b c d e

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    int i = 0,j = 0,Num = 1;
    char ch = 'a';

    for(i=1;i<=iRow;i++)
    {
        ch = 'a';
        for(j=1;j<=iCol;j++)
        {
            if(i%2 != 0)
            {
                printf(" %c",ch++);
            }
            else
            {
                printf(" %d",j);
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
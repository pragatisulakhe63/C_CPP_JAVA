// Input : iRow = 4 iCol = 4
// Output : 2 4 6 8 10
//          1 3 5 7 9
//          2 4 6 8 10
//          1 3 4 7 8

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
                printf(" %d",j*2);
            }
            else
            {
                printf("%d",Num);
                Num = Num + 2;
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
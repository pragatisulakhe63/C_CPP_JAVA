// Row      4
// Columns  3

/*
        *   *   *   
        *   *   *   
        *   *   *   
        *   *   *   

*/
#include<stdio.h>

void DisplayPatten(int iRow, int iCol)   
{
    int i = 0, j = 0;

    if(iRow < 0)
    {
        iRow = -iRow;
    }
    if(iCol < 0)
    {
        iCol = -iCol;
    }
   
    for(i = 1; i<= iRow; i++)   
    {
        
        for(j = 1; j <= iCol; j++)  
        {
            printf("*\t");
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns \n");
    scanf("%d",&iValue2);

    DisplayPatten(iValue1, iValue2);

    return 0;
}

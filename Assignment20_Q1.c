// Input : iRow = 4  iCol = 4
// Output : A B C D
//          A B C D
//          A B C D
//          A B C D
#include<stdio.h>
void DisplayPattern(int iRow,int iCol)
{
    int i=0,j=0;
    for(i=1;i<=iRow;i++)
    {
        char ch = 'A';

        for(j=1;j<=iCol;j++)
        {
            printf("%c\t",ch);
            ch++;
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
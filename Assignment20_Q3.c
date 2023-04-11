// Input : iRow = 3 iCol = 5
/*
 Output : A A A A A
          B B B B B
          C C C C C
*/
#include<stdio.h>
void DisplayPattern(int iRow,int iCol)
{
    int i=0,j=0;
    char ch = 'A';
    for(i=1;i<=iRow;i++)
    {
        
        for(j=1;j<=iCol;j++)
        {
           printf("%c\t",ch);
            
        }
        ch++;
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
/* Write a program to find if a square matrix is symmetric.
*/

#include <stdio.h>

int main() {
    int Row=0,Column=0,flag=0;
    scanf("%d %d", &Row,&Column);
    printf("Entered row = %d and columns = %d of square matrix\n", Row,Column);
    int matr1[Row][Column],matr2[Row][Column];
    printf("Enter the input matrix : \n");
    for(int i=0;i<Row;i++)
    {
        for(int j=0;j<Column;j++)
        {
            scanf("%d", &matr1[i][j]);
            printf("%d\t", matr1[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<Row;i++)
    {
        for(int j=0;j<Column;j++)
        {
            matr2[i][j]=matr1[j][i];
        }
    }
    for(int i=0;i<Row;i++)
    {
        for(int j=0;j<Column;j++)
        {
            if(matr1[i][j]!=matr2[i][j])
            {
                flag=1;
            }
            else
            {
                continue;
            }
        }
    }
    if(flag==0)
    {
        printf("The matrix is symmetric");
    }
    else
    {
        printf("The matrix is not symmetric");
    }
	return 0;
}
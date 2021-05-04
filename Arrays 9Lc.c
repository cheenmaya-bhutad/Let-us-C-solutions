/* Write aprogram to obtain the transpose of a 4*4 matrix. The transpose of a matrix is obtained by exchanging the elements of each row
witht he elements of corrosponding column
*/

#include <stdio.h>

int main() {
	int matr1[4][4],matr2[4][4]={0};
	printf("The original matrix is : \n");
	for(int i=0;i<4;i++)
	{
	    for(int j=0;j<4;j++)
	    {
	        scanf("%d", &matr1[i][j]);
	        printf("%d\t", matr1[i][j]);
	    }
	    printf("\n");
	}
	for(int i=0;i<4;i++)
	{
	    for(int j=0;j<4;j++)
	    {
	        matr2[i][j]=matr1[j][i];
	    }
	}
	printf("The transpose of input user matrix is : \n");
	for(int i=0;i<4;i++)
	{
	    for(int j=0;j<4;j++)
	    {
	        printf("%d\t", matr2[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}
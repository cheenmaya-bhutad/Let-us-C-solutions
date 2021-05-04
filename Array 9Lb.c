/* program to pick up the largest number from any 5 row by 5 column matrix
*/

#include <stdio.h>

int main() {
	int matr[5][5]={0},n=0;
	for(int i=0;i<5;i++)
	{
	    for(int j=0;j<5;j++)
	    {
	        scanf("%d\t", &matr[i][j]);
	        if(n<matr[i][j])
	        {
	            n=matr[i][j];
	        }
	    }
	}
	printf("The largest number from any 5 row by 5 column matrix is %d", n);
	return 0;
}
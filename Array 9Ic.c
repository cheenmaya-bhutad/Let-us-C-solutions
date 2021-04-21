/* Write a program using pointers to find the smallest numbers in an array of 25 floating numbers.
*/

#include <stdio.h>

int main(void) {
	float arr[25],*j,temp=0;
	for(int i=0;i<=24;i++)
	{
	    scanf("%f\n",&arr[i]);
	}
	j=&arr[0];
	for(int i=0;i<=24;i++)
	{
	    if(*j<temp)
	    {
	        temp=*j;
	    }
	    else
	    {
	        continue;
	    }
	    j++;
	}
	printf("Smallest element is %f ",temp);
	return 0;
}


/* If an array arr contains n elements, then write a program to check if arr[0]=arr[n-1],arr[1]=arr[n-2] 
and so on
*/

#include <stdio.h>

int main(void) {
	int n,flag=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<=n-1;i++)
	{
	    scanf("%d",&arr[i]);
	}
	for(int i=0;i<=((n/2)-1);i++)
	{
	    if(arr[i]==arr[n-1-i])
	    {
	        flag=1;
	    }
	    else
	    {
	        flag=0;
	    }
	}
	if(flag==1)
	{
	    printf("The check is passed");
	}
	else
	{
	    printf("The chek is not passed");
	}
	return 0;
}


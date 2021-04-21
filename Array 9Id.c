/* Write a program which performs the following tasks:

- initialize an integer array of 10 elements in main()
- pass the entire array to a function modify()
- in modify() multiply each element of array by 3
- return the control to main() and print the new elements in main()

*/

#include <stdio.h>
void modify(int *,int);

int main(void) {
	int a[10];
	for(int i=0;i<=9;i++)
	{
	    scanf("%d",&a[i]);
	}
	modify(&a[0],10);
	for(int i=0;i<=9;i++)
	{
	    printf("%d ",a[i]);
	}
	return 0;
}

void modify(int *j,int n)
{
    for(int i=0;i<=9;i++)
    {
        *j=((*j)*3);
        j=j+1;
    }
}

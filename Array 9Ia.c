/* Write a program to copy the contents of one array into another in the reverse order
*/

#include <stdio.h>

int main(void) {
    int a[10],b[10],*j;
    for(int i=0;i<=9;i++)
    {
        a[i]=i;
    }
    j=&a[9];
    for(int i=0;i<=9;i++)
    {
        b[i]=*j;
        j--;
        printf("%d ", b[i]);
    }
	return 0;
}


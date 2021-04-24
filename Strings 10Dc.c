/* Write a program that extracts part of the given string from the specified position. For example, if the
string is "Working with strings is fun", then if from position 4, 4 characters are to be extracted then the
program should return string as "king". If the number of characters to be extracted is 0 then the program
should extract the entire string from the specified position.
*/

#include <stdio.h>
#include <string.h>

int main(void) {
	char input[50];
	char *ptr;
	int n,l;
	printf("Enter the input stirng : ");
	gets(input);
	ptr=input;
	printf("Enter the start position : ");
	scanf("%d",&n);
    printf("\nEnter the length of output string required : ");
    scanf("%d",&l);
    if(l!=0)
    {
        while(l!=0)
        {
            printf("%c",*(ptr+n-1));
            ptr++;
            l--;
        }
    }
    else
    {
        while(*ptr!='\0')
        {
            printf("%c",*(ptr+n-1));
            ptr++;
        }
    }
    return 0;
}
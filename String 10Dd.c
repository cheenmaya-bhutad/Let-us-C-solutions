/* write a program that converts a string like "124" to an integer 124
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
	char input[50];
	int len=0,temp=0,sum=0,count=0;
	char *ptr;
	gets(input);
	len=strlen(input);
	ptr=input+(len-1);
	printf("Integer equivalent is : ");
    while(len!=0)
    {
        switch(*ptr)
        {
            case '0':
                temp=0;
                break;
            case '1':
                temp=1;
                break;
            case '2':
                temp=2;
                break;
            case '3':
                temp=3;
                break;
            case '4':
                temp=4;
                break;
            case '5':
                temp=5;
                break;
            case '6':
                temp=6;
                break;
            case '7':
                temp=7;
                break;
            case '8':
                temp=8;
                break;
            case '9':
                temp=9;
                break;
        }
        sum=sum+temp*(pow(10,count));
        count++;
        ptr--;
        len--;
    }
    printf("%d",sum);
    return 0;
}


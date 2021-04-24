/* To uniquely identify a book a 10-digit ISBN number is used. The rightmost digit is a checksum digit. This 
digit is determined from the other 9 digits using the condition that d1 + 2d2 +3d3 ..... 10d10 must be a multiple
of 11 (where the di denotes the ith digit from right). The cheksum digit d1 can be any value form 0 to 10: the 
ISBN convention is to use the value X to denote 10. Write a program that receives a 10-digit integer, computes the 
checksum, and reports whether the ISBN number is correct or not.
*/

#include <stdio.h>

int main(void){
    char ISBN[10];
    int sum=0,temp=0;
    gets(ISBN);
    for(int i=0;i<=9;i++)
    {
        switch(ISBN[i])
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
            case 'X':
                temp=10;
                break;
        }
        sum=sum+((i+1)*temp);
    }
    if((sum%11)==0)
    {
        printf("ISBN number is correct");
    }
    else
    {
        printf("ISBN number is incorrect");
    }
    return 0;
}


/* An automobile company has the serial number for engine parts starting from AA0 to FF9.
The other characteristics of parts to be specified in a structure are:
Year of manufacture,
material,
and quantity manufactured.

(a) Specify a structure to store information corresponding to a part.
(b) Write a program to retrieve information on parts with serial numbers between BB1 and CC6.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

struct engineparts
{
    char serialnum[2];
    int YOM;
    char material[MAX];
    int quantity;
};

void printenginepartinfo(struct engineparts list[])
{
    int i=0;
    for(int j=0;j<5;j++)
    {
        if((list[j].serialnum[0]=='B') && (list[j].serialnum[1]=='1'))
        {
            i=j;
            do
            {
                printf("Year of Manufacturing : %d\n", list[i].YOM);
                printf("Quantity available : %d\n", list[i].quantity);
                printf("Serial number : %s\n", list[i].serialnum);
                printf("Material Composition : %s", list[i].material);
                i++;
            }while((list[i].serialnum[0]!='E') && (list[i].serialnum[1]!='5'));
        }
        else
        {
            continue;
        }
    }
}

int main()
{
    struct engineparts list[5],*ptr;
    for(int i=0;i<5;i++)
    {
        scanf("%d", &list[i].YOM);
        scanf("%d", &list[i].quantity);
        scanf("%s\n", list[i].serialnum);
        fgets(list[i].material,MAX,stdin);
    }
    printenginepartinfo(list);
    return 0;
}
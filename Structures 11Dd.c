/* A record contains the name of the cricketer, his age, the number of test matches that he has played and the average runs that he has scored in each test match.
Create an array of structure to hold records of 20 such cricketers and then write a program to read these records and arrange them in ascending order by average runs.
Use the qsort( ) standard library function.

Without using qsort function
*/

#include <stdio.h>
#include <stdlib.h>

struct record
{
    char name[50];
    int age;
    int numofmatches;
    float average;
};
struct record list[10],t;


int main() 
{
    for(int i=0;i<10;i++)
    {
        fgets(list[i].name,50,stdin);
        scanf("%d\n", &list[i].age);
        scanf("%d\n", &list[i].numofmatches);
        scanf("%f\n", &list[i].average);
    }
    printf("Before sorting : \n");
    for(int i=0;i<10;i++)
    {
        printf("%d\t %d\t %f\t %s", list[i].age,list[i].numofmatches,list[i].average,list[i].name);
    }
    printf("After sorting : \n");
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(list[i].average > list[j].average)
            {
                t = list[i];
                list[i]=list[j];
                list[j]=t;
            }
        }
        printf("%d\t %d\t %f\t %s", list[i].age,list[i].numofmatches,list[i].average,list[i].name);
    }
	return 0;
}

/* sample input
59
39.89
Vijay Shankar
28
40
25.34
David wiese
30
15
34.76
Shikhar Dhawan
37
184
35.39
MS Dhoni
45
211
40.41
JP Duminy
36
87
39.78
*/
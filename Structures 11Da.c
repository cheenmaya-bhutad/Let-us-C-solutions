/* Roll number, Name, Department, Course, Year of joining

Assume that there are not more than 450 students in the
college. 

(a) Write a function to print names of all students who joined in a particular year.
(b) Write a function to print the data of a student whose roll number is given.

*/

#include <stdio.h>
#include <string.h>

struct student{
    int rollnum;
    char name[50];
    char dept[100];
    char course[100];
    int YOJ;
};
void printnames(struct student list[],int year);
void printdetails(struct student list[],int roll);

void printnames(struct student list[],int year)
{
    for(int i=0;i<4;i++)
    {
        if(list[i].YOJ==year)
        {
            printf("%s\n", list[i].name);
        }
        else
        {
            continue;
        }
    }
}

void printdetails(struct student list[],int roll)
{
    for(int i=0;i<4;i++)
    {
        if(list[i].rollnum==roll)
        {
            printf("The details for the student with matched roll number is\n");
            printf("Roll number is : %d\n", list[i].rollnum);
            printf("Name is :%s\n", list[i].name);
            printf("Department is :%s\n", list[i].dept);
            printf("Course is :%s\n", list[i].course);
            printf("Year of joining is :%d\n", list[i].YOJ);
        }
        else
        {
            continue;
        }
    }
}
int main() 
{
	struct student list[4] = {
	    {1,"Cheenmaya Bhutad","Electronics and Telecommunications","Bachelors of Engineering",2015},
	    {2,"Mugdha Bhutad","Pharmacy","Bachelors of Pharmacy",2017},
	    {3,"Sarvesh Saraf","Electrical Engineering","Bachelors of Engineering",2021},
	    {4,"Marshal Mathers","Music","Rappers",1985},
	};
	int year=0,rn=0;
	scanf("%d", &year);
	printf("Entered user YOJ input : %d\n", year);
	printnames(list,year);
	scanf("%d", &rn);
	printf("Entered user roll number : %d\n", rn);
	printdetails(list,rn);
    return 0;
}
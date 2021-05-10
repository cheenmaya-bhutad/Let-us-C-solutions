/*Create a structure to specify data of customers in a bank. The data to be stored is Account Number, Name, Balance in the account.
Assume a maximum of 200 customers in the bank.

(a) Write a function to print the Account number and name of each customer with a balance below Rs. 100. 

(b) If a customer request for withdrawal or deposit, it is given in the form:

Acct. no, amount, code (1 for the deposit, 0 for withdrawal)

Write a program to give a message, "The balance is insufficient for the specified withdrawal". 

*/

#include <stdio.h>
#include <string.h>
#define MAX 50

struct bank
{
    int accnum;
    char name[MAX];
    float balance;
};
void balancebelow100(struct bank customers[]);
void makedeposit(struct bank customers[],int amount,int accnum);
void makewithdrawal(struct bank customers[],int amount,int accnum);

void makedeposit(struct bank customers[],int amount,int accnum)
{
    for(int i=0;i<5;i++)
    {
        if(customers[i].accnum==accnum)
        {
            customers[i].balance+=amount;
            printf("New balance is : %f\n", customers[i].balance);
        }
        else
        {
            continue;
        }
    }
}

void makewithdrawal(struct bank customers[],int amount,int accnum)
{
    for(int i=0;i<4;i++)
    {
        if(customers[i].accnum==accnum)
        {
            if((customers[i].balance - amount) < 100)
            {
                printf("The balance is insufficient for the specified withdrawal\n");
            }
            else
            {
                customers[i].balance-=amount;
                printf("The new balance is : %f\n", customers[i].balance);
            }
        }
        else
        {
            continue;
        }
    }
}

void balancebelow100(struct bank customers[])
{
    for(int i=0;i<4;i++)
    {
        if(customers[i].balance < 100)
        {
            printf("Name is : %s\n", customers[i].name);
            printf("The Balance is : %f\n", customers[i].balance);
        }
        else
        {
            continue;
        }
    }
}


int main() 
{
    struct bank customers[4]={
        {10003,"Sarvesh Saraf",50},
        {10000,"Cheenmaya Bhutad",500},
        {10001,"Mugdha Bhutad",800},
        {10002,"Shrineet Badnore",85}
    };
    char ch='y',choice;
    int accnum=0,code;
    float amount=0;
/*    for(int i=0;i<5;i++)
    {
       scanf("%d\n", &customers[i].accnum);
       fgets(customers[i].name,MAX,stdin);
       scanf("%f\n", &customers[i].balance);
    }
*/  while(ch=='y')
    {
        printf("Perform Deposit or withdrawal: press 1 for Deposit and 0 for withdrawal\n");
        scanf(" %c", &choice);
        printf("User entered choice : %c\n", choice);
        if(choice=='1')
        {
            scanf("%d", &accnum);
            scanf("%f", &amount);
            scanf("%d", &code);
            makedeposit(customers,amount,accnum);
        }
        else if(choice=='0')
        {
            scanf("%d", &accnum);
            scanf("%f", &amount);
            scanf("%d", &code);
            makewithdrawal(customers,amount,accnum);
        }
        printf("Do you want to continue yes or no\n");
        scanf(" %c", &ch);
        printf("User entered : %c\n", ch);
    }
    balancebelow100(customers);
	return 0;
}
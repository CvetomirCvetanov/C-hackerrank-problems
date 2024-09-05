/bank.c
#include <stdio.h>
#include <string.h>
#include "bank.h"

#define MAX_USERS 1000
int AccountsCount = 0; 
tsAccountList AccountList[MAX_USERS];
void create_account(void)
{
    char Name[50];
    int Balance;
    int Id;

    printf("Enter Account ID: \n");
    fflush(stdout);
    scanf("%d", &Id);
    printf("Enter Account Name: \n");
    fflush(stdout);
    scanf("%s", Name);
    printf("Enter Initial Balance: \n");
    fflush(stdout);
    scanf("%d", &Balance);

    AccountList[AccountsCount].msId = Id;
    AccountList[AccountsCount].msAccountListBalance = Balance;
    AccountsCount++;
}

void deposit(void)
{
    int Id;
    int Deposit;

    printf("Enter Account ID: \n");
    fflush(stdout);
    scanf("%d", &Id);
    printf("Enter Deposit Amount: \n");
    fflush(stdout);
    scanf("%d", &Deposit);

    int DepositIdx = search_for_user(Id);
    AccountList[DepositIdx].msAccountListBalance += Deposit; 
}

void withdraw(void)
{
    int Id;
    int Withdraw;

    printf("Enter Account ID: \n");
    fflush(stdout);
    scanf("%d", &Id);
    printf("Enter Withdrawal Amount: \n");
    fflush(stdout);
    scanf("%d", &Withdraw);

    int WithdrawIdx = search_for_user(Id);
    AccountList[WithdrawIdx].msAccountListBalance -= Withdraw; 
}

void check_balance(void)
{
    int Id;

    printf("Enter Account ID: \n");
    fflush(stdout);
    scanf("%d", &Id);

    int CheckIdx = search_for_user(Id);
    printf("%d", AccountList[CheckIdx].msAccountListBalance);
    printf("\n");
}

int search_for_user(int Id)
{
    for(int SearchIdx = 0; SearchIdx<MAX_USERS; SearchIdx++){
        if(AccountList[SearchIdx].msId == Id){
            return SearchIdx;
        }
    }
    return 0;
}

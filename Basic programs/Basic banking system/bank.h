//bank.h
#ifndef BANK_H
#define BANK_H


typedef struct sAccounts
{
    int msId;
    char msAccountListName[50];
    long long msAccountListBalance;
}tsAccountList;

void operation(void);
void create_account(void);
void deposit(void);
void withdraw(void);
void check_balance(void);
int search_for_user(int Id);

#endif

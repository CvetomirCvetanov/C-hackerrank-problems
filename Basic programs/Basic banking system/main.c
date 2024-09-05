#include "bank.h"
#include <stdio.h>
#include <string.h>


int main() {
   int running = 1;
   int actions;

   while(running)
   {
      printf("Choose an action:\n");
      printf("0 - Create Account\n");
      printf("1 - Deposit\n");
      printf("2 - Withdraw\n");
      printf("3 - Check Balance\n");
      printf("4 - Exit\n");
      printf("Enter your choice: ");
      fflush(stdout);

      scanf("%d", &actions);
      

      switch(actions){
         case 0:
         printf("0");
               create_account();
               break;
         case 1:
         printf("1");
               deposit();
               break;
         case 2:
         printf("2");
               withdraw();
               break;
         case 3:
         printf("3");
               check_balance();
               break;
         case 4:
               running = 0;
               printf("Exiting the program.\n");
               break;
         default:
               printf("Invalid action. Please try again.\n");
               break;
      }
   }
   return 0;
}

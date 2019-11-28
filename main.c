#include <stdio.h>
#include "myBank.h"
int main(){
 int x=1;
 char type;
 double accountNumber;
 double amount;
 
  while(x){

      printf("Transaction  type: ");
      scanf(" %c", &type);
      getchar();

      switch(type) {

      case 'O':
      printf("Enter amount: ");
      scanf("%lf", &accountNumber);
      newAcc(accountNumber);
      break;

      case 'B':
      printf("Account number: ");
      scanf("%lf", &accountNumber);
      showAmount((int)accountNumber);
      break;
      
      case 'D':
      printf("Account number: ");
      scanf("%lf", &accountNumber);
      printf("amount: ");
      scanf("%lf", &amount);
      deposit((int)accountNumber,amount);
      break;
      
          case 'W':
      printf("Account number: ");
      scanf("%lf", &accountNumber);
      printf("Amount: ");
      scanf("%lf", &amount);
      withDraw((int)accountNumber,amount);
      break;

      case 'C':
      printf("Account number: ");
      scanf("%lf", &accountNumber);
      close(accountNumber);
      break;

          case 'I':

      printf("interest rate: ");
      scanf("%lf", &amount);
      addPercent(amount);
      break;

      case 'P':
      showOpenAcc();
      break;

      case 'E':
      closeAll();
      x=0;
      break;

    
  }
  }
  return 0;
}


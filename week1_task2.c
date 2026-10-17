#include<stdio.h>

int main() {

      float height;
      double balance;
      int number[10];
      
      printf("Enter height(cm):");
      scanf("%f", &height);
      
      printf("Enter the bank balance (KES):");
      scanf("%1s", &balance);
      
      printf("Enter the phone number:");
      scanf("%10s", number);
      
      printf("height: %.2f\n",height);
      printf("bank balance: KES%.3d\n", balance);
      printf("phone number: %int", number);
      
      return 0;
}      
      
#include <stdio.h>

int main () {
      float bill;
      double units;
      
     printf("Enter the number of water units consumed");
     scanf("%d", &units);
     
     if (units <= 30) {
         bill = units * 20;
     } else if (units <= 60) {
          bill = units * 25;
     } else {
           bill = units * 30;
     
     printf("total bill: %.2f KES\n", bill);    
     }
     
     return 0;
}       
           
     
#include <stdio.h>

int main(){
    int occupancy[7] = {300,400,500,600,700,800,900};
    int i, sum = 0;
    
    for(i=0; i<7; i++){
    printf("\n%d",occupancy[i]);
    sum = sum + occupancy[i];}
    
    printf("\ntotal: %d", sum);
    printf("\naverage: %d", sum/7);
    
    
    
    return 0;}
   
#include<stdio.h>

int main() {
    int i,j,k;
    int vacant = 0,occupied = 0;
    int occupancy[3][5][10] = {
        {
            {1,1,0,0,1,1,0,0,1,0},
            {1,1,1,0,1,0,0,0,1,0},
            {0,0,1,1,1,0,1,0,1,1},
            {1,1,0,0,1,0,1,1,1,0},
            {1,1,0,1,1,0,1,0,1,1}
        },
        { 
            {1,1,0,1,1,0,1,0,1,1},
            {1,1,0,0,1,0,1,1,1,0},
            {1,1,0,0,1,1,0,0,1,0},
            {1,1,0,0,1,0,1,1,1,0},
            {0,0,1,1,1,0,1,0,1,1}
         },
         {
            {1,1,0,0,1,0,1,1,1,0},
            {1,1,0,0,1,0,1,1,1,0},
            {1,1,0,0,1,1,0,0,1,0},
            {1,1,0,1,1,0,1,0,1,1},
            {1,1,0,0,1,0,1,1,1,0}
          },
          
      for(i=0; i<3; i++){
         for(j=0; j<5; j++){
            for(k=0; k<10; k++){
         printf("%d",occupancy[i][j][k]);    
         
         if(occupancy[i][j][k] = 1)
            occupied++
         else 
            vacant++;
            }
            
         printf("%n");   
         }
         printf("%n");}
         printf("\ntotal rooms: %d",3*5*10);
         printf("\nOccupied rooms: %d",occupied);
         printf("\nVacant rooms: %d",vacant);
         
return 0;}         
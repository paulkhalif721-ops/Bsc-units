#include <stdio.h>

int main() {
    float attendance, averagemarks;
    
    printf("Enter the attendance percentage:");
    scanf("%f", &attendance);
    
    printf("Enter the average marks:");
    scanf("%f", &averagemarks);
    
    if (attendance >= 75% && averagemarks >= 40) {
           printf("Eligible");
    } else {
            printf("Not eligible");
    }        
    return 0;  
}          
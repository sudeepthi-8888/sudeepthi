#include <stdio.h> 
int main() { 
    double speed, time, distance; 
 
    // Input the speed in meters per second 
    printf("Enter the speed (m/s): "); 
    scanf("%lf", &speed); 
 
    // Input the time in seconds 
    printf("Enter the time (s): "); 
    scanf("%lf", &time); 
 
    // Calculate the distance 
    distance = speed * time; 
 
    // Output the distance 
    printf("Distance traveled: %.2lf meters\n", distance); 
 
    return 0; 
} 
 


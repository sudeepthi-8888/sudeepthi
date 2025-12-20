#include <stdio.h> 
int main() { 
    int num1, num2, num3, max; 
    printf("Enter three numbers: "); 
    scanf("%d %d %d", &num1, &num2, &num3); 
 
    // Use the conditional operator to find the maximum 
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? 
num2 : num3); 
    printf("The maximum of %d, %d, and %d is: %d", num1, num2, num3, max); 
    return 0; 
} 

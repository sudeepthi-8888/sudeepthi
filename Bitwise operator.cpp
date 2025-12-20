#include <stdio.h> 
int main()  
{ 
      int choice; 
    double temperature, converted_temperature; 
 
    printf("Temperature Conversion Menu:\n"); 
    printf("1. Fahrenheit to Celsius\n"); 
    printf("2. Celsius to Fahrenheit\n"); 
    printf("Enter your choice (1 or 2): "); 
    scanf("%d", &choice); 
 
    if (choice == 1) { 
        printf("Enter temperature in Fahrenheit: "); 
        scanf("%lf", &temperature); 
        converted_temperature = (temperature - 32) * 5 / 9; 
        printf("%.2lf°F is equal to %.2lf°C\n", temperature, 
converted_temperature); 
    } else if (choice == 2) { 
        printf("Enter temperature in Celsius: "); 
        scanf("%lf", &temperature); 
        converted_temperature = (temperature * 9 / 5) + 32; 
        printf("%.2lf°C is equal to %.2lf°F\n", temperature, 
converted_temperature); 
    } else { 
        printf("Invalid choice. Please enter 1 or 2.\n"); 
    } 
    return 0; 
} 


#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int choice;
    float temp;
    float result;

    printf("Welcome to Temperature Converter!\n");
    printf("Choose a conversion type:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Celsius to Kelvin\n");
    printf("3. Fahrenheit to Celsius\n");
    printf("4. Fahrenheit to Kelvin\n");
    printf("5. Kelvin to Celsius\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        result = (temp * 9/5) + 32;
        printf("Temperature in Fahrenheit: %.2fF\n", result);
    } 
    else if (choice == 2) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        result = temp + 273.15;
        printf("Temperature in Kelvin: %.2fK\n", result);
    } 
    else if (choice == 3) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        result = (temp - 32) * 5/9;
        printf("Temperature in Celsius: %.2fC\n", result);
    } 
    else if (choice == 4) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        result = ((temp - 32) * 5/9) + 273.15;
        printf("Temperature in Kelvin: %.2fK\n", result);
    } 
    else if (choice == 5) {
        printf("Enter temperature in Kelvin: ");
        scanf("%f", &temp);
        result = temp - 273.15;
        printf("Temperature in Celsius: %.2fC\n", result);
    } 
    else if (choice == 6) {
        printf("Enter temperature in Kelvin: ");
        scanf("%f", &temp);
        result = (temp - 273.15) * 9/5 + 32;
        printf("Temperature in Fahrenheit: %.2fF\n", result);
    } 
    else {
        printf("Invalid choice! Please select a number between 1 and 6.\n");
    }

    return 0;
}

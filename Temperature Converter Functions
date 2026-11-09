#include<stdio.h>

float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);
int main()
{
    int choice;
    float equi;
    printf("1 - Celsius to Fahrenheit\n");
    printf("2 - Fahrenheit to Celsius\n");
    printf("Choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1: 
            float c;
            printf("Enter a celsius value: ");
            scanf("%f", &c);
            
            float ctf = celsiusToFahrenheit(c);
            printf("%.1f C = %.1f F", c, ctf);
        ; break;
        case 2: 
            float f;
            printf("Enter a fahrenheit value: ");
            scanf("%f", &f);
            
            float ftc = fahrenheitToCelsius(f);
            printf("%.1f F = %.1f C", f, ftc);
        ; break;
        default: printf("Invalid choice!"); break;
    }
    return 0;
}
float celsiusToFahrenheit(float c) {
    float celsius=(c*1.8)+32;
    return celsius;
}
float fahrenheitToCelsius(float f) {
    float fahrenheit=(f-33)+1.8;
    return fahrenheit;
}

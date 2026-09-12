//this is the answer to question 1:
//Note: %.2f forces the float value to strictly give the output to 2 decimal places

#include <stdio.h>

int main() {
    float temp;
    printf("Enter temperature in Farenheit: ");
    scanf("%f", &temp);

    float celsius = (temp - 32) * 5 / 9;

    printf("--Conversion result--\n");
    printf("Temperature in Fahrenheit: %.2f\n", temp); 
    printf("Temperature in Celsius: %.2f\n", celsius);
}
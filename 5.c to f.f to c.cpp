#include <stdio.h>

int main() {
    float temperature;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &temperature);
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", temperature, (temperature * 9 / 5) + 32);

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &temperature);
    printf("%.2f Fahrenheit is equal to %.2f Celsius\n", temperature, (temperature - 32) * 5 / 9);

    return 0;
}

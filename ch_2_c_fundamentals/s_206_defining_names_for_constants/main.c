#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main() {
    float fahrenheit, celsius;

    printf("Enter a temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("%.1f fahrenheit converts to %.1f degrees celcius\n", fahrenheit, celsius);

    return 0;
}

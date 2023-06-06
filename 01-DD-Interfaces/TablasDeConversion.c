#include <stdio.h>
#include "Conversion.h"

int main() {
    const int FARENHEIT_LOWER = 0;
    const int FARENHEIT_UPPER = 300;
    const int FARENHEIT_STEP = 20;
    
    printf("\nTabla conversion Farenheit a Celsius:\n");
    printf("Farenheit\tCelsius\n");
    
    for (double farenheit = FARENHEIT_LOWER; farenheit <= FARENHEIT_UPPER; farenheit += FARENHEIT_STEP) {
        double celsius = Celsius(farenheit);
        printf("%3.0f\t%6.1f\n", farenheit, celsius);
    }
    
    printf("\n");
    


    const int CELSIUS_LOWER = -40;
    const int CELSIUS_UPPER = 100;
    const int CELSIUS_STEP = 10;
    
    printf("\nTabla conversion Celsius a Fahrenheit:\n");
    printf("Celsius\tFarenheit\n");
    
    for (double celsius = CELSIUS_LOWER; celsius <= CELSIUS_UPPER; celsius += CELSIUS_STEP) {
        double farenheit = Farenheit(celsius);
        printf("%3.0f\t%9.1f\n", celsius, farenheit);
    }
    
    return 0;
}

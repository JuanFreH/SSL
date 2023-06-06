#include <stdio.h>
#include <assert.h>
#include "Conversion.h"

int main() {

    // Test Farenheit a Celsius
    assert(Celsius(32.0) == 0.0);
    assert(Celsius(212.0) == 100.0);
    assert(Celsius(-40.0) == -40.0);
    
    // Test Celsius a Farenheit
    assert(Farenheit(0.0) == 32.0);
    assert(Farenheit(100.0) == 212.0);
    assert(Farenheit(-40.0) == -40.0);

    printf("\ntests succesful.\n\n");
    
    return 0;
}

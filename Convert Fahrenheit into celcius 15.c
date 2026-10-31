#include <stdio.h>

int main() {
    float fahrenheit = 91;
    float fahrenheittocelcius = (fahrenheit - 32) * 5.0 / 9.0;
    printf("fahrenheit=%f\nfahrenheit to celcius=%f\n", fahrenheit, fahrenheittocelcius);
    return 0;
}


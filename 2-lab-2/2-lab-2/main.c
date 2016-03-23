// Celsius to Fahrenheit
// Date: 7 March 2016

#include <stdio.h>
int main (void)
{

int fahrenheit = 0;
double celsius;
printf("Fahrenheit      Celsius\n");
for (fahrenheit; fahrenheit < 213; fahrenheit++) {
    celsius = (5.0/9.0) * (fahrenheit-32);
    printf ("%d                %.1lf\n",fahrenheit, celsius);
}

return 0;

}

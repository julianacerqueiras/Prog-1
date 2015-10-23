#include <stdio.h>

int main()

{
float far, celsius;

printf ("Informe a temperatura em Celsius");
scanf ("%f", &celsius);

far = 1.8 * celsius + 32;

printf (" A temperatura em Fahrenheit é %f", far); 

return 0;
}
#include <stdio.h>

/* Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table. */

main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = (5.0/9.0) * (-32.0);
    upper = 148.9;
    step = (5.0 / 9.0) * 20;

    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%6.1f %3.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
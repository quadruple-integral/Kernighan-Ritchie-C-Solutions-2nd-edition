#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */

main()      /* the main function is the first function that the program executes */
{
    float fahr, celsius;        /* all variables must be declared before use */
    float lower, upper, step;   /* the semicolon terminates individual statements */
                                /* float is a data type; see book for more */
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheit  Celcius\n");                    /* prints heading before, as required */
    while (fahr <= upper) {
        celsius = 5.0 * (fahr-32.0) / 9.0;
        printf("%6.0f %10.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
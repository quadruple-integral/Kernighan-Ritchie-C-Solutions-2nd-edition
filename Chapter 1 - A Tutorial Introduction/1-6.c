#include <stdio.h>

/* Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1. */

main()
{
    int value;
    value = (getchar() != EOF); 
    printf("%i\n", value);
    return 0;
}

/* if your input in your terminal is not an EOF, the output will be 1; i.e. TRUE */

/* in windows please use "ctrl + z" to print an EOF, this gives you 0 instead ; i.e. FALSE */
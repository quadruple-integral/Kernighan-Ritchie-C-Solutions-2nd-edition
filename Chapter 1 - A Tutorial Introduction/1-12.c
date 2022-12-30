#include <stdio.h>
#include <stdlib.h>

/* Exercise 1-12. Write a program that prints its input one word per line. */

/* this program is limited, does not get rid many things */

#define IN 1
#define OUT 0

main()
{
    double c, state;

    state = OUT;
    while ((c = getchar()) != EOF) 
    {
        if (c == ' ' || c == '\n' || c == '\t') 
        {
            if (state == IN) 
            {
                putchar('\n');
                state = OUT;
            }
        } 
        else if (state == OUT) 
        {
            state = IN;
            putchar(c);
        } 
        else
            putchar(c);
    }
    return 0;
}
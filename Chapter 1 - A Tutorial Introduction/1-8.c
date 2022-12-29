#include <stdio.h>

/* Exercise 1-8. Write a program to count blanks, tabs, and newlines. */

/* for this program to work correctly you need to input an EOF at the end of your input */

main()
{
    int c, nb, nt, nl;

    nb = 0;
    nt = 0;
    nl = 0;

    while((c = getchar()) != EOF) 
    {
        if (c == ' ')
            ++nb;
        if (c == '\t')
            ++nt;
        if (c == '\n')
            ++nl;
    };
    
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", nb, nt, nl);

}
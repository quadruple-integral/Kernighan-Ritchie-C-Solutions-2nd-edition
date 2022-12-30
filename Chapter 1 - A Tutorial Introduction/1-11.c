#include <stdio.h>

/* test boundary conditions are likely to produce bugs */

/* boundary conditions: no input/words/words are blanks/etc */

#define IN 1
#define OUT 0

main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("Number of lines: %d\nNumber of words: %d\nNumber of characters: %d\n", nl, nw, nc);
}
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int main(int arc, char *arv[])
{
    FILE *file;
    char l[128];
    long n;

    if(arc != 2)
    {
        printf("Usage: %s <file>\n", arv[0]);
        return (1);
    }
    file = fopen(arv[1], "r");
    if (file == NULL)
    {
        printf("could not open file %s\n", arv[1]);
        return (1);
    }
    while ((fgets(l, sizeof(l), file)) != NULL)
    {
        n = atol(l);
        factors(n);
    }
    fclose(file);
    return (0);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void factors(long n)
{
    long i;

    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%ld=%ld*%ld\n", n, n / i, i);
            return;
        }
    }
    printf("%ld=%ld*%ld\n", n, n, 1L);
}

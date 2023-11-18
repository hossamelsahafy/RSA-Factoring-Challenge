#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * factors - function that Factorize as many numbers as possible
 * into a product of two smaller numbers
 *
 * n: parameter to identify long
 *
 * Return: if n was found the program will exit
*/
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

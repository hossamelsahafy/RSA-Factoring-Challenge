#include <stdio.h>
#include <stdlib.h>


/**
 * factors - function that Factorize as many numbers as possible
 * into a product of two smaller numbers
 *
 * @n: parameter to identify long
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
/**
 * main - entry function
 *
 * @arc: parameter to identify integer
 *
 * @arv: parameter that point to char
 *
 * Return: if it fails otherwise 0
 */
int main(int arc, char *arv[])
{
	FILE *file;
	char l[128];
	long n;

	if (arc != 2)
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

#include<stdio.h>
#include<math.h>
/**
 * factors - function find and print the two
 * prime factors of a given number n
 *
 * @n: parameter to identify long int
 *
 * Return: exit if it failes
 */
void factors(long n)
{
	long i;

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			printf("%ld=%ld*%ld\n", n, n / i, i);
			return;
		}
	}
	printf("%ld is a prime number\n", n);
}
/**
 * main - entry function
 *
 * @arc: parameter to identify int
 *
 * @arv: parameter that point to char
 *
 * Return: exit if it failes otherwise 0
 */
int main(int arc, char *arv[])
{
	FILE *file;
	long n;

	if (arc != 2)
	{
		printf("Usage: %s <file>\n", arv[0]);
		return (1);
	}
	file = fopen(arv[1], "r");
	if (file == NULL)
	{
		printf("Could not open file %s\n", arv[1]);
		return (1);
	}
	while (fscanf(file, "%ld", &n) != EOF)
	{
		factors(n);
	}
	fclose(file);
	return (0);
}


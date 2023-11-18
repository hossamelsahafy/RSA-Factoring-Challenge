#include<stdio.h>
#include<math.h>

void factors(long n)
{
    long i;

    for(i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            printf("%ld=%ld*%ld\n", n, i, n / i);
            return;
        }
    }
    printf("%ld is a prime number\n", n);
}

int main(int argc, char *argv[])
{
    FILE *file;
    long n;
    if (argc != 2)
    {
        printf("Usage: %s <file>\n", argv[0]);
        return 1;
    }
    file = fopen(argv[1], "r");
    if (file == NULL)
    {
        printf("Could not open file %s\n", argv[1]);
        return 1;
    }
    while(fscanf(file, "%ld", &n) != EOF)
    {
        factors(n);
    }
    fclose(file);
    return 0;
}

#include <stdio.h>

int sum(int n);
int factorial(int n);

int main()
{

    int number, results, results2;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    results = sum(number);
    results2 = factorial(number);

    printf("sum= %d \n", results);
    printf("factorial = %d\n", results2);
    return 0;
}

int sum(int n)
{
    if (n != 0)
        return n + sum(n - 1);
    else
        return n;
}

int factorial(int n)
{

    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

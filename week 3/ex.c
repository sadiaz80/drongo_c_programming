#include <stdio.h>

int sq(int n);

int main()
{

    int number = 5, results;

    results = sq(number);

    printf("the square of 5 = %d\n", results);
}

int sq(int n)
{

    // if (n = 5)
    //     return n * n;
    // else
    //     return n;

    return n * n;
}

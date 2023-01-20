#include <stdio.h>

void main()
{

    int a, b;

    int sum = a + b;

    printf(" ENTER THE NUMBER \n");
    scanf("%i", &a);

    printf(" ENTER THE NUMBER \n");
    scanf("%i", &b);

    if (a > b)
    {

        printf(" a is bigger \n");
    }

    else
    {

        printf("b is bigger \n ");

        printf(" The sum is %i \n", sum);
        int sub = a - b;
        printf("The sub is %i \n", sub);
        int mult = a * b;
        printf("The mult is %i\n", mult);
        int div = a / b;
        printf("the divisin is %i \n", div);
        int modulo = a % b;
        printf("the modulo %i \n", modulo);
    }
}

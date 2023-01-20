#include <stdio.h>

void main()
{

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int even = 0;
    int odd = 0;
    int dd = 0;

    for (int n = 0; n < 8; n++)
    {

        // dd = numbers[n] * 2;
        // printf("%i \n", dd);

        if (numbers[n] % 2 == 0)
        {

            printf("%i is even \n", numbers[n]);
        }
        else
        {

            printf("%i is odd \n", numbers[n]);
        }
    }

    // if (

    //{

    // printf(" %i \n", numbers[i]);
    // printf("the sum is %i \n", sum);
    // sum=sum + numbers[i];
    // }
}

//  printf("the total sum is %i \n ", sum);
//

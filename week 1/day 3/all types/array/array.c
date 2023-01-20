#include <stdio.h>

void main()
{

    int score[] = {100, 20, 85, 40, 50};

    int pass = 0, fail = 0;

    for (int k = 0; k < 5; k++)
    {

        // printf ("this is position %i  %i \n ", k, sc[k] *2);

        if (score[k] >= 70)
        {

            // printf("pass\n");
            pass = pass + 1;
        }
        else
        {
            // printf("fail\n");
            fail = fail + 1;
        }

        printf("pass %i\n", pass);
        printf("fail %i \n", fail);
        printf("\n");
    }
}

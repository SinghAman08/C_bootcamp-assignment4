#include <stdio.h>
int main()
{
    int r, c;

    // for (r = 0; r < 5; r++)
    // {
    //     for (c = 0; c <= r; c++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    for (r = 0; r <= 10; r++)
    {
        for (c = 10; c >= 0; c--)
        {
            if (c <= r)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }


    return 0;
}
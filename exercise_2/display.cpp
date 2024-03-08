#include "../library.h"
#include "../prototypes.h"

void display(int** spiral, int N)
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
            printf("%6d",spiral[i][j]);
        printf("\n");
    }
}

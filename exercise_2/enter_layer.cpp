#include "../library.h"
#include "../prototypes.h"

int* enter_layer(int** spiralnew, int layer, int N, int edge)
{
    int c=0;
    int *cur = new int[4 * (N-1)];

    for( int j = layer; j < edge; j++)
    {
        cur[c] = spiralnew[layer][j];
        c++;
    }

    for( int i = layer; i < edge; i++)
    {
        cur[c] = spiralnew[i][edge];
        c++;
    }

    for( int j = edge; j >= layer; j--)
    {
        cur[c] = spiralnew[edge][j];
        c++;
    }

    for( int i = edge - 1; i > layer; i--)
    {
        cur[c] = spiralnew[i][layer];
        c++;
    }

    return cur;
}

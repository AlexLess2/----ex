#include "../library.h"
#include "../prototypes.h"

int shift_layer(int**spiralnew, int layer, int edge, int* shift)
{
    int c = 0;

    for( int j = layer; j < edge; j++)
    {
        spiralnew[layer][j] = shift[c];
        c++;
    }

    for( int i = layer; i < edge; i++)
    {
        spiralnew[i][edge]= shift[c];
        c++;
    }

    for( int j = edge; j >= layer; j--)
    {
        spiralnew[edge][j]= shift[c];
        c++;
    }

    for( int i = edge - 1; i > layer; i--)
    {
        spiralnew[i][layer]= shift[c];
        c++;
    }

    return 0;
}

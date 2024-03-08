#include "../library.h"
#include "../prototypes.h"

int** flip_array(int** spiral,int N,int Step)
{
    int edge;
    int layer;
    int *cur = NULL;
    int *shift = new int[4 * (N - 1)];

    int **spiralnew = new int *[N];
    for (int i = 0; i < N; i++)
        spiralnew[i] = new int[N];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            spiralnew[i][j] = spiral[i][j];

    for(layer = 0; layer < N/2; layer++)
    {
        edge = N-1-layer;
        cur = enter_layer(spiralnew, layer, N, edge);

        for(int i = 0; i < 4 * (N - 2*layer - 1); i++)
            shift[(i+Step)%(4*(N- 2*layer -1))]=cur[i];

        shift_layer(spiralnew, layer, edge, shift);
    }

    delete[] cur;
    delete[] shift;

    return spiralnew;
}

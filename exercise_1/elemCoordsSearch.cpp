#include "../library.h"
#include "../prototypes.h"

int *elemCoordsSearch(const int &n, int *array, const int &ElemNum, const int &Elem)
{
    int *ElemCoords = new int[ElemNum];
    int ElemFound{};

    for (int i = 0; ElemFound < ElemNum; ++i)
        if (array[i] == Elem)
        {
            ElemCoords[ElemFound] = i;
            ++ElemFound;
        }

    return ElemCoords;
}

#include "../library.h"
#include "../prototypes.h"

int elemSumSearch(const int &n, int *array, const int &Elem)
{
    int ElemNum{};

    for (int i = 0; i < n; ++i)
        if (array[i] == Elem)
            ++ElemNum;

    return ElemNum;
}

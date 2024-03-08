#include "../library.h"
#include "../prototypes.h"

int *fillUnsortedArray(const int &n, int *array)
{
    int *unsortedArray = new int[n];

    for (int i = 0; i < n; ++i)
        unsortedArray[i] = array[i];

    return unsortedArray;
}
